/*
 *位操作符 演示
 * */
#include <stdio.h>
int main()
{
    //~是一个单目位操作符，取反，它可以更句数字计算出一个新数字，两数二进制内容都不一样
    char ch=~0x93;
    int num =ch;
    printf("num is 0x%x\n",num);
    int num1=0;
    //&取储存区的对应地址
    printf("&num1 is %p\n",&num1);
    //*取对应地址中的储存区值
    printf("*&num1 is %d\n",*&num1);
    return 0;
}



