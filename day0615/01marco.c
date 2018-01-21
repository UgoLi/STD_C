/*
 *宏演示
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define PI 3.14f
#define CIRCLE(r) 2*PI*r
int main(){
    int radius=0;
    printf("请输入半径：");
    scanf("%d",&radius);
    printf("周长是%g\n",CIRCLE(radius));
    return 0;
}
