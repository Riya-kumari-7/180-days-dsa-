#include<stdio.h>
int main(){
    int marks[10] = {95,90,85,35,31,78,28,45,25,31};
    for(int i=0;i<=10;i++){
        if(marks[i]<35){
            printf("%d ",i);
        }
    }
    return 0;
}