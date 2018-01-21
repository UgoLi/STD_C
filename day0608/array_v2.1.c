//二维数组演示
#include <stdio.h>
int main()
{
    int arr[3][2]={0};
    printf("arr是%p，&arr[0][0]是%p\n",arr,&arr[0][0]);
    printf("sizeof(arr)是%d个字节\n",sizeof(arr));
    printf("arr[1]是%p,&arr[1][0]是%p\n",arr[1],&arr[1][0]);
    printf("sizeof(arr[1])是%d字节\n", sizeof(arr[1]));
    return 0;
}

