/*
 * 计算从1开始到某个给定正整数之间所有整数的和
 */
#include<stdio.h>
int num1=0;
int add(int max){
    if(max<=0)
        return ;
    else 
    {
       num1= add(max-1)+max;
    }
    return num1;
}
int main(){
   printf("%d\n",add(10));
    return 0;
}
