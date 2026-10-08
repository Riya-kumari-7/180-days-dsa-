#include<stdio.h>
void england (){
    printf("you are in England\n");
    return;
}
void korea(){
    printf("you are in seoul\n");
    england(); //calling england
    return;
}
void india(){
    printf("you are in India\n");
    korea(); // calling korea
    return;
    
}
int main(){
    india(); // calling india
    return 0;
}