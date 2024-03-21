#include<stdio.h>

void multiply(int m1,int n1,int n2,int arr1[][n1],int arr2[][n2]){
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            int product=0;
            for(int k=0;k<n1;k++){
                product= product + *(*(arr1+i)+k) * *(*(arr2+k)+(j));
            }
            printf(" %d ",product);
        }
        printf("\n");
    }
}

int main(){

    int m1,n1;
    printf("Enter the dimensions of the first matrix (rows columns): ");
    scanf("%d%d",&m1,&n1);

    int arr1[m1][n1];

    printf("Enter the elements of the first matrix:\n");
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            scanf("%d",(*(arr1+i)+j));
        }
    }

    int m2,n2;
    printf("Enter the dimensions of the second matrix (rows columns): ");
    scanf("%d%d",&m2,&n2);

    int arr2[m2][n2];

    printf("Enter the elements of the second matrix:\n");
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            scanf("%d",(*(arr2+i)+j));
        }
    }

    if(n1==m1){
        printf("Answer:\n");
        multiply(m1,n1,n2,arr1,arr2);
    }
    else{
        printf("\nMultiplication not possible.");
    }

    return 0;
}