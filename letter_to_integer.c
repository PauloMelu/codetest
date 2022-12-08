// convert letter to integer
#include <stdio.h>
int main() {
    char phrase[50];
    printf("Enter the phrase: ");
    scanf("%[^\n]",&phrase);

    for(int i=0;i<strlen(phrase);i++){
        if(toupper(phrase[i])>64 && toupper(phrase[i])<91 )
            printf("%d,",toupper(phrase[i])-64);
        else
            printf("%d,",0);
    }
    
    return 0;
}
