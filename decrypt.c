//decrypt with incremental shifting
#include <stdio.h>
#include <string.h>
#include <ctype.h> 
int main() {
    char word[50];
    int shift,incrementvalue,increment=0;
    
    printf("Enter a word to decrypt: ");
    scanf("%[^\n]s",&word);
    printf("Shift: ");
    scanf("%d",&shift);
    printf("Increment: ");
    scanf("%d",&incrementvalue);
    
    int decryptedvalue;
    for(int i=0;i<strlen(word);i++){
        if(word[i]==' ')
            printf(" ");
        else{
            decryptedvalue = tolower(word[i]) - shift - increment;
            while(decryptedvalue<97)
                decryptedvalue += 26;
            printf("%c",decryptedvalue);
        }
        increment += incrementvalue;
    }
    return 0;
}
