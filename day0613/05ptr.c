/*
 *const Keyword
 */
#include<stdio.h>
int main(){
    int num=0;
    const int *p_num=&num;
    // *p_num=10; 错误，不能对捆绑存储区赋值
    int *const p_num1=&num;
    *p_num1=10;
    // p_num1=NULL; 错误，不能对本身赋值
    return 0;
}
