#include <stdio.h>

int main() {
    
    int numbers[100];
    int count;
    printf("Enter number of inputs: ");
    scanf("%d",&count);
    
    printf("Enter the inputs: \n");
    for(int i=0;i<count;i++){
        scanf(" %d",&numbers[i]);
    }
    printf("-------------------------------------------------------\n");
    
    
    printf("The inputs are:\n");
    for(int i=0;i<count;i++){
        printf("%d,",numbers[i]);
    }
    
    //sort in ascending
    int temporary;
    for(int i=0;i<count;i++){
        for(int j=i+1;j<count;j++){
            if(numbers[j]<numbers[i]){
                temporary = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = temporary;
            }
        }
    }
    
    printf("\nThe inputs sorted are:\n");
    for(int i=0;i<count;i++){
        printf("%d,",numbers[i]);
    }
    
    //mean
    float sumformean=0;
    for(int i=0;i<count;i++){
        sumformean += numbers[i];
    }
    printf("\nThe mean is: %f",sumformean/count);
    
    //median
    printf("\ntest %f\n",75/2);
    if(count%2!=0){
        printf("\nThe median is %d",numbers[count/2]);
    }else{
        printf("\nThe median is %f",(numbers[count/2]+numbers[count/2-1])/2);
    }
    
    
    
    return 0;
}
