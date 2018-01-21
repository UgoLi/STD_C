//continue 的使用
#include<stdio.h>
int main()
{
    int num=0;
    for(num=0;num<=5;num++)
    {
    printf("%d\n",num);
    continue;
    printf("%d\n",num+10);
    }
    return 0;
}   
