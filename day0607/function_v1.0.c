//function_v1.0 --函数演示
#include<stdio.h>
//#include<string.h>
//#include<stdbool.h>
int function_1(int);
int function_2(int,int);
int main()
{
   printf("%d\n", function_1(1));
   printf("%d\n",function_2(2,10));
    return 0;
}
int function_1(int x)
{
    printf("一个参数重载！");
    return 1;
}
int function_2(int x,int y)
{
    printf("二参数重载！");
    return x*y;
}
