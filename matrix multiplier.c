//matrix multiplier
#include <stdio.h>
int main() {
    
    int row1,col1,row2,col2;
    printf("Row and column of first matrix: ");
    scanf("%d %d",&row1,&col1);
    printf("Row and column of second matrix: ");
    scanf("%d %d",&row2,&col2);
    
    //inputs of first matrix
    printf("Inputs of first matrix:\n");
    int array1[row1][col1];
    for(int i=0;i<row1;i++){
        printf("Row %d: ",i);
        for(int j=0;j<col1;j++){
            scanf("%d",&array1[i][j]);
        }
    }
    
    //inputs of second matrix
    printf("Inputs of second matrix:\n");
    int array2[row2][col2];
    for(int i=0;i<row2;i++){
        printf("Row %d: ",i);
        for(int j=0;j<col2;j++){
            scanf("%d",&array2[i][j]);
        }
    }
    
    //print first matrix
    printf("First matrix:\n");
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            printf("%d ",array1[i][j]);
        }
        printf("\n");
    }
    
    //print second matrix
    printf("Second matrix:\n");
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            printf("%d ",array2[i][j]);
        }
        printf("\n");
    }
    
    //multiply
    printf("The product is:\n");
    int sum;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            sum = 0;
            for(int k=0;k<col1;k++){
                sum += array1[i][k] * array2[k][j];
            }
            printf("%d ",sum);
        }
        printf("\n");
    }
    
    return 0;
}
