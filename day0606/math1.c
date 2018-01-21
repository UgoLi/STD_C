//鸡兔同笼
#include<stdio.h>
int main()
{
    int a;
    int b;
    for(a=0,b=40;a<=40;a++,b--)
    {
        if(100==a*2+b*4)
        {
            printf("鸡有：%d只，兔有：%d只\n",a,b);
            break;
        }

    }
    printf("%d\n",a);
    return 0;
}
