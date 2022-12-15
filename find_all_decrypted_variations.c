//Find all variations of decryption
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char word[100];
    printf("Enter a word to decrypt: ");
    scanf("%[^\n]",word);
    
    int decryptedvalue;
    for(int shift = 1;shift<27;shift++){
        printf("shift - %d : ",shift);
        for(int i=0;i<strlen(word);i++){
            if(word[i]==' ')
                printf(" ");
            else{
                decryptedvalue = tolower(word[i]) - shift;
                while(decryptedvalue<97)
                    decryptedvalue += 26;
                printf("%c",decryptedvalue);
            }
        }
        printf("\n");
    }
    return 0;
}
