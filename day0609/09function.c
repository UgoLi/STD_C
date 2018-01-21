/*
 * 在屏幕上显示
 * 1X9=9
 * 2X8=16
 * ...
 * 5X5=25
 * 每行使用一个函数调用语句显示
 **/
#include<stdio.h>
void ride(int a,int b){
    printf("%d X %d= %d \n",a,b,a*b);
}
int main(){
    int a=1,b=9;
    for (a=1,b=9;a<=5;a++,b--){
        ride(a,b);
    }
    return 0;
}

