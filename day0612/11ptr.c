/*
 *指针演示
 */
#include<stdio.h>
int main(){
    int num = 0;
    int *p_num,*p_num1;   //指针声明
    p_num=&num;
    *p_num=10;
    printf("num是%d\n",num);
    return 0;
}
