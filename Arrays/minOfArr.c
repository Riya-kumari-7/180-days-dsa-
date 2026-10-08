#include<stdio.h>
int main(){
    int arr[7] = {-10,-4,-2,-13,-10,-19,-22};
    int min = arr[0]; // sabse chhota number
    for(int i=0;i<=6;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("%d",min);
    return 0;
}