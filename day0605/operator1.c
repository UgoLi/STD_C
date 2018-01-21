/*
*自增、自减操作符演示
**/
#include <stdio.h>
int main()
{
    int num=10,num1=0 ;
   // num++;
   // printf("num is %d\n",num);
   // ++num;    
   // printf("num is %d\n",num);
    num1=++num;
    printf("num is %d\n",num1);
    num=10;
    num1=num++;
    printf("num is %d\n",num1);
    num=10;
    num1=num++ + ++num;
    printf("num is %d\n",num1);
    return 0;
}
