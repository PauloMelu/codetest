#include<stdio.h>
#include<sys/stat.h>
int main(){
    mkdir("letters", 0777);
    mkdir("numbers", 0777);
    FILE *letterfile, *numberfile;
    
    
    int letterOpened = 0, numberOpened = 0;
    int letterClosed = 0, numberClosed = 0;
    char c;
    rep:
    printf("Enter a character: ");
    scanf(" %c", &c);
    
    if((c>='a' && c<='z') || (c>='A' && c<='Z')){
        if(letterOpened == 0){
            letterfile = fopen("./letters/inputted.txt","w");
            letterOpened = 1;
        }
        fputc(c , letterfile);
        fputc('\n',letterfile);
        goto rep;
    }
    else if(c >= '0' && c<= '9'){
        if(letterOpened == 0){
            letterfile = fopen("./letters/inputted.txt","w");
            letterOpened = 1;
        }
        if(letterClosed == 0)
            fclose(letterfile);
        letterClosed = 1;
        if(numberOpened == 0){
            if(letterOpened == 0){
                letterfile = fopen("./letters/inputted.txt","w");
                letterOpened = 1;
            }
            numberfile = fopen("./numbers/inputted.txt","w");
            numberOpened = 1;
        }
        fputc(c, numberfile);
        fputc('\n',numberfile);
        goto rep;
    }
    else{
        if(letterOpened == 0){
            letterfile = fopen("./letters/inputted.txt","w");
            letterOpened = 1;
        }
        if(letterClosed == 0)
            fclose(letterfile);
        if(numberOpened == 0){
            numberfile = fopen("./numbers/inputted.txt","w");
            numberOpened = 1;
        }
        if(numberClosed == 0)
            fclose(numberfile);
		
		
        return 0;
    }
}
