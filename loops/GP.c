#include<stdio.h>
int main (){
    float n;
    printf("Enter a number :");
    scanf("%d",&n);
    //1 2 4 8 16 ....
    float a=100;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a= a + 1/2;
    }
    return 0;
}