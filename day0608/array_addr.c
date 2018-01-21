// 数组演示，存储区
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    printf("arr是%p，&arr[0]是%p\n",arr,&arr[0]);
    printf("sizeof(arr)是%d\n",sizeof(arr));
    return 0;
}
