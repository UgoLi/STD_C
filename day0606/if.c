/*
 *if 分支演示
 * */
#include<stdio.h>
int main ()
{
    int num =0;
    printf("请输入一个数字：");
    scanf("%d",&num);
    if (num>0) 
    {
    printf("非负数\n");
    }
    else if(num==0) //!num     
    {
    printf("为零\n");
    }
    else if(num<0)  //else
    {
      printf("负数\n");
    }
    return 0;
}

