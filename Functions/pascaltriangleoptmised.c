#include<stdio.h>
int main (){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        int first =1;
        printf("%d ",first);
        for(int j=0;j<=i;j++){
            printf("%d ",first);
         first = first * (i-j)/(j+1); // ic(j+1)
        }
        printf("\n");
    }
    return 0;
}