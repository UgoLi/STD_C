/*
 *多文件编程演示
 */
#include <stdio.h>
//#include "09add.h"
int add(int,int);
int main(){
    int num=add(3,8);
    printf("求和结果是%d\n",num);
    return 0;
}
