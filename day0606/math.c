//鸡兔同笼问题 40个头，100只脚  算出鸡兔各多少？
#include<stdio.h>
int main ()
{
    int a=0;//鸡
    int b=0;//兔
    for (int x=0,y=40;100!=(x*2+y*4)||x>=40;x++,y--)
    {             
        a=x+1;
        b=y-1;        
    }
    printf("鸡有：%d,兔有：%d\n",a,b);
    return 0;
}
