//二维数组 演示
#include<stdio.h>
int main()
{
    int arr[][2]={{1,2},{3,4},{5,6}}; //二维数组声明语句
   //arr[1][0]=10;
    int row=0,col=0,tmp=1;
    //数组赋值
   /* 
    * for (row=0;row<=2;row++)
    {
        for(col=0;col<=1;col++)
        {
            arr[row][col]=tmp;
            tmp++;
        }
    }
    */
    //数组输出
    for (row=0;row<=2;row++)
    {
        for(col=0;col<=1;col++)
        {
            printf("%d ",arr[row][col]);
        }
        printf("\n");
    }
    return 0;
}
