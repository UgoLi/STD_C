/*
 *指针--函数返回演示
 */
#include<stdio.h>
int *read();
int main(){
    int *p_num;
    p_num=read();
    printf("数字是%d\n",*p_num);
    return 0;
}
int * read(void){
    static int num=0;
    printf("请用户输入一个数字：");
    scanf("%d",&num);
    return &num;
}
