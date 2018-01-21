/*
 *IF 找3个数的最大值
 * */
#include <stdio.h>
int main()
{
    int a,b,c;
    int x;
    printf("请输入a，b，c的值：");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        x=a;
    }
    else if (b>a&&b>c)
    {
        x=b;
    }
    else if(c>a&&c>b)
    {
        x=c;
    }
    printf("最大值=%d\n",x);
    return 0;

}

