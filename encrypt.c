//encrypt with incremental shifting
#include <stdio.h>
#include <string.h>
#include <ctype.h> 
int main() {
    char word[50];
    int shift,incrementvalue,increment=0;
    
    printf("Enter a word to encrypt: ");
    scanf("%[^\n]s",&word);
    printf("Shift: ");
    scanf("%d",&shift);
    printf("Increment: ");
    scanf("%d",&incrementvalue);
    
    int encryptedvalue;
    for(int i=0;i<strlen(word);i++){
        if(word[i]==' ')
            printf(" ");
        else{
            encryptedvalue = tolower(word[i]) + shift + increment;
            while(encryptedvalue>122)
                encryptedvalue -= 26;
            printf("%c",encryptedvalue);
        }
        increment += incrementvalue;
    }
    return 0;
}
