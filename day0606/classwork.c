//编写程序从键盘得到一个1到100的整数，把这个整数到100之间所有和7无关的数字都显示在屏幕上
#include<stdio.h>
int main()
{
    int num=0;
    printf("请输入1-100之间的整数：");
    scanf("%d",&num);
    for(;num<=100;num++)
    {
        int j=0;
        int i=0;
        for(i=0;i<=9;i++)
            {
                if (
                        ((num-10*i)==7)
                        ||
                        ((num/10)==7)
                    )
                    {
                    j=1;
                    break;
                    }
            }
        if(j!=1&&(num%7!=0))
                {
                printf("%d  ",num);
                }
    }
    printf("\n");
    return 0;
}
