//二维数组 5组，每组5个元素
#include<stdio.h>
int main()
{
    int arr[5][5]={0};
    int row=0,col=0;
   /*
    *第一种写法
    *
    * for(col=0;col<=3;col++)
    {
        arr[0][col]=1;
    }
    for(row=0;row<=3;row++)
    {
        arr[row][4]=2;
    }
    for(col=4;col>=1;col--)
    {
        arr[4][col]=3;
    }
    for(row=1;row<=4;row++)
    {
        arr[row][0]=4;
    }
    */
    // 第二种方法
    for(row=0;row<=4;row++)
        for(col=0;col<=4;col++)
        {
            if(0==row&&col<=3)
                arr[row][col]=1;
            else if(4==col&&row<=3)
                arr[row][col]=2;
            else if(4==row&&col>=1)
                arr[row][col]=3;
            else if(0==col&&row>=1)
                arr[row][col]=4;
            else
                arr[row][col];
        }
    for(row=0;row<=4;row++)
    {
        for(col=0;col<=4;col++)
        {
            printf("%d ",arr[row][col]); 
        }
        printf("\n");
    }
    return 0;
}

