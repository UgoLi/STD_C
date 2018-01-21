/*
 * 生命周期演示
 */
#include<stdio.h>
void func(void){
    static int num=10;
    printf("num是%d\n",num);
    num=100;
}
void func1(void){
    int num=10000;
    func();
}
int main(){
    func();
    func1();
    return 0;
}
