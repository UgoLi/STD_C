//编写程序产生一张彩票（包含7个1到36之间的数）
//把所有数显示到屏幕上
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int arr[7],user[7];
    int num=0,num1=0;
    srand(time(0));
    printf("请输入用户号码！\n");
    for(int i=0;i<=6;i++)
    {
        printf("输入第%d个数:\n",i);
        scanf("%d",&user[i]);
        scanf("%*[^\n]");
        scanf("%*c");
    }
    while(num<=6)
    {
        int a=rand()%36+1;
       // printf("%d ",a);
        if(num>=1)
        {
            int b=0;
            //检查新数字是否与前面数字重复
            for(num1=0;num1<=num-1;num1++)
            {
                if (arr[num1]==a)
                {
                    b=1;
                    break;
                }
                b=0;
            }
            //不重复，b=0；重复，b=1。
            if (1!=b)
            {
                arr[num]=a;
                num++;
            }
        }
        else if(0==num)
        {
            arr[num]=a;
            num++;
        }
    }
    printf("\n");
    printf("彩票号码:");
    //检查重复值，并重新赋值
   /* for(num=0;num<=6;num++)
        for(num1=num+1;num1<=6;num1++)
            if(arr[num]==arr[num1])
                arr[num1]=rand()%36+1;
     */
    for(num=0;num<=6;num++)
        printf("%d ",arr[num]);
    printf("\n");
    int cnt=0;
    for(int i=0;i<=6;i++)
    {
        for(int j=0;j<=6;j++)
        {
          if (arr[i]==user[j])
          {
            printf("%d ",arr[i]);
            cnt++;
          }
        }
        
    }
    printf("\n");
    printf("有%d个号码与中奖号码相同！\n",cnt);
    return 0;
}
