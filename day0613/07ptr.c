/*
 *指针形式参数演示
 *调用函数通过指针形参传递数组给被调用函数，被调用函数处理数组
 */
#include<stdio.h>
void print(int *,int);
int main(){
    int arr[]={1,2,3,4,5};
    print(arr,5);
    return 0;
}
void print(int *p_arr,int size){
    int num=0;
    for(num=0;num<=size-1;num++){
        printf("%d ",*(p_arr+num));
    }
    printf("\n");
}
