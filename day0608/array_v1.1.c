//编写程序产生一张彩票（包含7个1到36之间的数）
//把所有数显示到屏幕上
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int arr[7];
    int num=0,num1=0;
    srand(time(0));
    while(num<=6)
    {
        int a=rand()%36+1;
        if(num>=1)
        {
            for(num1=0;num1<=num-1;num1++)
            {
                if (arr[num-num1]==a)
                    continue;
                else
                {
                    arr[num]=a;
                    num++;
                    break;
                }
            }         
        }
        else
            arr[num]=a;
            num++;
    }
    //检查重复值，并重新赋值
   /* for(num=0;num<=6;num++)
        for(num1=num+1;num1<=6;num1++)
            if(arr[num]==arr[num1])
                arr[num1]=rand()%36+1;
     */
    for(num=0;num<=6;num++)
        printf("%d ",arr[num]);
    printf("\n");
    return 0;
}
