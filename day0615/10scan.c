#include<stdio.h>
#include "10scan.h"
//static int num;   不能被其他文件使用
int num;
void scan(){
    printf("请输入一个整数：");
    scanf("%d",&num);
}
