//扫雷游戏
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    char arr[10][10];
    int arr1[10][2];
    int row=0,col=0;
    int row1=0,col1=0;
    for (row=0;row<=9;row++)
        for(col=0;col<=1;col++)
            arr1[row][col]=rand()%10;
    printf("地雷坐标：\n");
    for(row=0;row<=9;row++)
    {
        for(col=0;col<=1;col++)
            printf("%d ",arr1[row][col]);
        printf("\n");
    }
    for (row=0;row<=9;row++)
        for(col=0;col<=9;col++)
        {   
            for(row1=0;row1<=9;row1++)
               {    
                   int a=arr1[row1][0];
                   int b=arr1[row1][1];
                    if(row==a&&col==b)
                        arr[row][col]='X';
                     else
                        arr[row][col]='O';
                }
        }
    printf("地雷排布：\n");
    for(row=0;row<=9;row++)
    {
        for(col=0;col<=9;col++)
            printf("%c ",arr[row][col]);
        printf("\n");
    }
    return 0;
}
