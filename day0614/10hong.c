/*
 *macro宏演示
 */
#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#define PI 3.14f
int main(){
    int radius=0;
    printf("输入半径：");
    scanf("%d",&radius);
    printf("周长是%lg\n",2*PI*radius);
    return 0;
}
