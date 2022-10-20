#include <stdio.h>
#include <stdbool.h>
int main() {
    int num,i=0,count,a,b=0,reverse,last,check,threes,MilzeroCheck,MilzeroTrue=0;
    int BilzeroCheck,BilzeroTrue=0;
    bool bil=false,mil=false,thoustop=false,milstop=false;
    char * ones[] = {"","one ","two ","three ","four ","five ","six ","seven ","eight ","nine "};
    char * teens[] = {"ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};
    char * tens[] = {"","","twenty ","thirty ","fourty ","fifty ","sixty ","seventy ","eighty ","ninety "};
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    count = num;
    while(count>0){
        count = count/10;
        i++;
    }
    count = i;
    //printf("%d\n",count);
    
    reverse = num;
    while(reverse>0){
        a = reverse%10;
        b = b*10 + a;
        reverse = reverse/10;
    }
    reverse = b;
    //printf("%d\n",reverse);
    
    while(count>0){
        threes = count;
        check = count%3;
        last = reverse%10;
        BilzeroCheck = last;
        if(count>6){
            if(bil){
                while(BilzeroCheck>0){
                    a = BilzeroCheck%10;
                    BilzeroTrue += a;
                    BilzeroCheck = BilzeroCheck/10;
                }
                if(BilzeroTrue == 0){
                    milstop = true;
                    mil = true;
                }else{
                    milstop = false;
                    mil = false;
                }
            }
        }
        MilzeroCheck = last;
        if(count>3){
            if(mil){
                while(MilzeroCheck>0){
                    a = MilzeroCheck%10;
                    MilzeroTrue += a;
                    MilzeroCheck = MilzeroCheck/10;
                }
                if(MilzeroTrue == 0){
                    thoustop = true;
                }else
                    thoustop = false;
            }
        }
        
        switch(check){
            case 0:
            case 1:
                printf("%s",ones[last]);
                if(check==0)
                    if(last!=0)
                        printf("hundred ");
                count--;    
                break;
            case 2:
                if(last!=1)
                    printf("%s",tens[last]);
                else{
                    reverse = reverse/10;
                    last = reverse%10;
                    printf("%s",teens[last]);
                    threes--;
                    count--;
                }
                count--;
                break;
        }
        
        switch(threes){
            case 4:
                if(thoustop){
                    break;
                }else
                    printf("thousand ");
                break;
            case 7:
                if(milstop){
                    break;
                }else
                    printf("million ");
                mil = true;
                break;
            case 10:
                printf("billion ");
                bil = true;
                break;
        }
        threes--;
        reverse = reverse/10;
    }
    printf("\n\nProgram Terminated");
    return 0;
}
