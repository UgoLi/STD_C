/*************************************************************************
	> File Name: function1.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月26日 星期一 18时02分39秒
 ************************************************************************/
/*
 *用递归求n！
 *
 */
#include<stdio.h>
int function_1(int n){
    int reslut=0;
    if(n<=1){
        return 1;
    }
    reslut=function_1(n-1)*n;     //递归变量一定写在函数调用语句里
    return reslut;
}
int main(){
    printf("%d ",function_1(5));
    printf("\n");
}
