/*
 * 函数演示
 */
#include<stdio.h>
void func1(void){
    int val;
    printf("val是%p\n",val);
   // val=10000;
}
void func(void){
    printf("1\n");
    func1();
   // int num=10;
}
void func2(void){
    func1();
}
int main(){
    func1();
    func1();
    func();
    func();
    func2();
    func2();
    int num=100;
    printf("num是%d\n",num);
    return 0;
}
