#include <stdio.h>
int main()
{
    unsigned int a;
    printf("请输入一个整数：");
    scanf("%u",&a);
    int i;
    i=sizeof(a)*8;
    printf("二进制位数为：%d\n",i);
    while (i>1)
    {
        int j=i-1;
        while (j>0)
        {
            printf(" ");
            j--;
        }
        printf("%d\r",a%2);
        a/=2;
        i-=1;
     }
    printf("%d\n",a%2);
}
