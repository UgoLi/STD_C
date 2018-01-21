//数组演示array
#include<stdio.h>
int main()
{
    int arr[5]={0,1,2,3,4}; //声明数组包括元素个数
    //arr[2]=10;
    int num=0;
   /*
    * for(num=0;num<=4;num++){
            arr[num]=num;
           // printf("%d ",arr[4-num]);
            }
   */
    for(num=0;num<=4;num++){
           // arr[num]=num;
            printf("%d ",arr[4-num]);
            }
    printf("\n");
    return 0;
}
