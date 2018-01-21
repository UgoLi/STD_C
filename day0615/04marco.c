/*
 *编写宏计算一个数字的平方
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define SQR(n) ((n)*(n))
int main(){
    int num=0;
    printf("请输入一个数：");
    scanf("%d",&num);
    printf("num的平方=%d\n",SQR(num));
    printf("num的平方=%d\n",SQR(++num));//不要将自增或自减结果作为参数
    return 0;
}
