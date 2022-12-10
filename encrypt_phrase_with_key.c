// encrypting a sentence into a matrix
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    
    //get rows and columns of encryption key
    int keyrow,keycol;
    printf("Enter rows and columns of encryption key: ");
    scanf("%d %d",&keyrow,&keycol);
    
    //get input of encryption key
    int keyarray[keyrow][keycol];
    for(int i=0;i<keyrow;i++){
        printf("Enter row %d of encryption key: ",i+1);
        for(int j=0;j<keycol;j++){
            scanf("%d",&keyarray[i][j]);
        }
    }
    
    //print encryption key
    printf("---THE ENCRYPTION KEY IS---\n");
    for(int i=0;i<keyrow;i++){
        for(int j=0;j<keycol;j++){
            printf("%d ",keyarray[i][j]);
        }
        printf("\n");
    }
    printf("---------------------------\n");
    
    //read the phrase
    char phrase[50];
    printf("Enter a phrase: ");
    scanf(" %[^\n]",phrase);
    
    //storage of converted phrase
    int plus=0;
    if(strlen(phrase)%keyrow!=0)
        plus++;
    int convertedphrase_row = strlen(phrase)/keyrow + plus;
    int convertedphrase_col = keyrow;
    int convertedphrase[convertedphrase_row][convertedphrase_col];
    
    //convert each letter to number and store
    printf("-----CONVERTED PHRASE-----\n");
    int j=0,k=0;
    for(int i=0;i<convertedphrase_row*convertedphrase_col;i++){
        if(k==convertedphrase_col){
            k = 0;
            j++;
        }
        if(j==convertedphrase_row)
            j = 0;
        if(toupper(phrase[i])>64 && toupper(phrase[i])<91){
            printf("%d,",toupper(phrase[i])-64);
            convertedphrase[j][k] = toupper(phrase[i])-64;
        }
        else{
            printf("%d,",0);
            convertedphrase[j][k] = 0;
        }
        k++;
    }
    
    //print converted phrase in matrix form
    printf("\n--------MATRIX FORM--------\n");
    for(int i=0;i<convertedphrase_row;i++){
        for(int j=0;j<convertedphrase_col;j++){
            printf("%d ",convertedphrase[i][j]);
        }
        printf("\n");
    }
    
    //multiply converted phrase by encryption key
    printf("----------PRODUCT----------\n");
    int sum;
    for(int i=0;i<convertedphrase_row;i++){
        for(int j=0;j<keycol;j++){
            sum = 0;
            for(int k=0;k<convertedphrase_col;k++){
                sum += convertedphrase[i][k] * keyarray[k][j];
            }
            printf("%d ",sum);
        }
        printf("\n");
    }
  
    return 0;
}
