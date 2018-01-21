/*************************************************************************
	> File Name: 06point.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月19日 星期一 11时19分12秒
 ************************************************************************/
//函数指针
#include<stdio.h>
int add(int num,int num1)
{
    return num+num1;
}
int main()
{
    int (*p_add)(int,int );    //函数指针声明
    p_add=add;
    printf("add是%p\n",add);
    printf("add(3,8)=%d\n",add(3,8));
    printf("p_add(3,8)=%d\n",p_add(3,8));
    return 0;
}
