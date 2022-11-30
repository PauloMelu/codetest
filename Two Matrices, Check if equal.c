#include <stdio.h>

int main() {
    
    int Row_Fst,Col_Fst,Row_Scnd,Col_Scnd;
    printf("Input Rows and Columns of the 1st matrix : ");
    scanf("%d",&Row_Fst);
    scanf("%d",&Col_Fst);
    
    printf("Input Rows and Columns of the 2nd matrix : ");
    scanf("%d",&Row_Scnd);
    scanf("%d",&Col_Scnd);
    
    //check if comparable
    if(Row_Fst!=Row_Scnd || Col_Fst != Col_Scnd){
        printf("The Matrices can't be compared");
        return 0;
    }
    
    //inputs of first array
    int fstArray[Row_Fst][Col_Fst];
    int i,j;
    printf("Input elements in the first matrix :\n");
    for(i=0;i<Row_Fst;i++){
        for(j=0;j<Col_Fst;j++){
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&fstArray[i][j]);
        }
    }
    
    //inputs of second array
    int scndArray[Row_Scnd][Col_Scnd];
    printf("Input elements in the second matrix :\n");
    for(i=0;i<Row_Scnd;i++){
        for(j=0;j<Col_Scnd;j++){
            printf("element - [%d,[%d] : ",i,j);
            scanf("%d",&scndArray[i][j]);
        }
    }
    
    //print first matrix
    printf("The first matrix is :\n");
    for(i=0;i<Row_Fst;i++){
        for(j=0;j<Col_Fst;j++){
            printf("%d ",fstArray[i][j]);
        }
        printf("\n");
    }
    
    //print second matrix
    printf("The second matrix is :\n");
    for(i=0;i<Row_Scnd;i++){
        for(j=0;j<Col_Scnd;j++){
            printf("%d ",scndArray[i][j]);
        }
        printf("\n");
    }
    
    //compare
    int notEqual=0;
    printf("The Matrices can be compared :\n");
    for(i=0;i<Row_Fst;i++){
        for(j=0;j<Col_Fst;j++){
            if(fstArray[i][j]!=scndArray[i][j])
            notEqual = 1;
        }
    }
    if(notEqual==1)
        printf("The matrices are not equal");
    else
        printf("The matrices are equal");
    
    return 0;
}
