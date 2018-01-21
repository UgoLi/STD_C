/*************************************************************************
	> File Name: function2.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月26日 星期一 19时17分43秒
 ************************************************************************/
//Hanoi 塔问题
#include<stdio.h>
void move(int n,int x,int y,int z){
    if(n==1){
        printf("%c--->%c\n",x,z);
        return;
    }
    move(n-1,x,z,y);
    printf("%c----->%c\n",x,z);
    move(n-1,y,x,z);
}
int main(){
    move(2,'a','b','c');
    return 0;
}
