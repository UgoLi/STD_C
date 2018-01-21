/*
 *多文件
 *函数：从键盘得到一个整数并把和这个整数传递给调用函数
 */
#include<stdio.h>
#include "10scan.h"
//int scan();	     放到配对头文件
//extern int num;    放到配对头文件
main(){
    scan();
    printf("从键盘获得整数：%d\n",num);
    return 0;
}
