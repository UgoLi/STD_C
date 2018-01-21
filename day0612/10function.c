/*
 *arr_fun
 */
#include<stdio.h>
void func(int arr[],int i){
    arr[i]=-arr[i];
}
int main(){
    int arr[]={1,2,3,4};
    func(arr,3);
    printf("函数结果%d\n",arr[3]);
    return 0;
}
