/*
 *宏操作符演示
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define STR(n) #n
#define PTR(n) p_##n
int main(){
    int num=0;
    int *PTR(num)=&num;
    printf("STR(2+3)=%s\n",STR(2+3));
    return 0;
}
