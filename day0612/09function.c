/*
 * 作用域演示
 */
#include<stdio.h>
int num=0,num1=0;
void func(void){
    int num1=11;  //局部变量
    num=10;   //全局变量
    printf("func中num1=%d\n",num1);
}
int main(){
    num=5;
    func();
    printf("num是%d，num1是%d\n",num,num1);
    return 0;
}
