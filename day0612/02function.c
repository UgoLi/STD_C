/*
 * 数组形式参数
 */
#include<stdio.h>
void neg(int arr[],int size){
    int num=0;
    for(num=0;num<=size-1;num++){
        arr[num]=0-arr[num];
    }
}
int main(){
    int arr[]={1,2,3,4,5},num=0;
    neg(arr,5);
    for (num=0;num<=4;num++){
        printf("%d ",arr[num]);
    }
    printf("\n");
    return 0;
}
