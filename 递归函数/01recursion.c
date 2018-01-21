/*************************************************************************
	> File Name: 01recursion.c
	> Author: 
	> Mail: 
	> Goals:求最大值 
	> Created Time: 2017年06月26日 星期一 20时16分20秒
 ************************************************************************/

#include<stdio.h>
int max(int a,int b,int c,int d){
    if(a>b&&a>c&&a>d){
        return a;
    }
    max(b,c,d,a);
}
int main(){
    printf ("%d\n",max(3,5,1,7));
}
