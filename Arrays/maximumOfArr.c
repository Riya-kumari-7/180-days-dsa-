#include<stdio.h>
int main(){
    int arr[7] = {-10,-4,-2,-13,-10,-19,-22};
    int max = arr[0]; // sabse chhota number
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}