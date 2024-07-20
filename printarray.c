#include<stdio.h>
void printarray(int*A,int size){
    for(int i=0;i<6;i++){
        printf("the array elements:%d\n",A[i]);
    }
}
int main(){
    int arr[]={1,2,34,56,54,41};
    int size=6;
    printarray(arr,6);
    return 0;
}