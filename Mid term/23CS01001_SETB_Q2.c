#include<stdio.h>

int main(){

    int u,l;

    printf("Input upper limit: ");
    scanf("%d",&u);

    printf("Input lower limit: ");
    scanf("%d",&l);

    int count=0;
    printf("Perfect Numbers are: ");

    for(int i=u;i<l;i++){
        int temp=0;
        for(int j=1;j<i;j++){
            if(i%j==0){
                temp+=j;
            }
        }
        if(temp==i){
            printf("%d ",i);
            count++;
        }
    }

    if(count==0){
        printf("Zero perfect numbers");
    }

    return 0;
}
