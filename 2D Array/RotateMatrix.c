#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of row/ column: ");
    scanf("%d",&n);
    printf("Enter all the elements: \n");
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // Transpose
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){       // agar aap chahe to aap j=i se bhi kr ya j=0;j<=i bhi 
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
         printf("\n");
    }
    //Rotate
    for(int i=0;i<n;i++){
        int j = 0;
        int k = n-1;
        while(j<k){
            // swap arr[i][j] and arr[i][k]
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }
    // Output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}