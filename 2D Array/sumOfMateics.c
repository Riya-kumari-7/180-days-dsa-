#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of row: ");
    scanf("%d",&r);
    int c;
    printf("Enter the number of coloum: ");
    scanf("%d",&c);
    printf("Enter the number of elements: ");
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum += arr[i][j];
        }
    }
    printf("The sum of given matrixs is%d",sum);
    return 0;
}