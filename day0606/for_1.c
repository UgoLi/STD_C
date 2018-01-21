//for 循环编写数字递减输出
#include<stdio.h>
int main()
{
    int num=0;
    int num1=0;
    int a=0;
    printf("输入值a=");
    scanf("%d",&a);
    for (num=1;num<=a;num++)
    {
        for(num1=a;num1>=num;num1--)
        {
            printf("%d ",num1);
        }
        printf("\n");
    }
    return 0;
}
