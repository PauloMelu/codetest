//decrypt
#include <stdio.h>
#include <string.h>
int main() {
    char array[50];
    char lower[50];
    int shift,index;
    char small[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    
    printf(": ");
    scanf("%[^\n]s",&array);
    
    printf("shift: ");
    scanf("%d",&shift);

    for(int i=0;i<strlen(array);i++){
        if(array[i]==' ')
            printf(" ");
        else{
            if(tolower(array[i])-shift-97<0)
                index = 26 + tolower(array[i])-shift-97;
            else
                index = tolower(array[i])-shift-97;
            printf("%c",small[index]);
        }
    }
    return 0;
}
