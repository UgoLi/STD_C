/*************************************************************************
	> File Name: 02recursion.c
	> Author: 
	> Mail: 
	> Goals:汉诺塔 问题 
	> Created Time: 2017年06月26日 星期一 20时29分41秒
 ************************************************************************/

#include<stdio.h>
void hanoi(int n,int a,int b,int c){
    if(n==1){
        printf("%c-->%c\n",a,c);
        return;
    }    
    hanoi(n-1,a,c,b);
    printf("%c-->%c\n",a,c);
    hanoi(n-1,b,a,c);
}
int main(){
    int n=0;
    scanf("%d",&n);
    hanoi(n,'A','B','C');
    return 0;
}
