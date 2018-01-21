/*************************************************************************
	> File Name: recursion.c
	> Author: 
	> Mail: 
	> Goals:递归计算：猴子每天吃一半加一个桃，第10天剩吃完后剩一个，输出每天剩余的桃子和总桃子数。 
	> Created Time: 2017年06月26日 星期一 19时55分25秒
 ************************************************************************/

#include<stdio.h>
int tao(int day){
    int cnt=0;
    if(day==10){
        return 1;
    }
    cnt=(tao(day+1)+1)*2;
    return cnt;
}
int main(){
    int num=0;
    scanf("%d",&num);
    printf("%d\n",tao(num));
    return 0;
}
