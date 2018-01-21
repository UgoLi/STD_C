/*
 *数据对齐和补齐演示
 */
#include<stdio.h>
typedef struct{
    char buf[2];
    int num;
}tmp;
typedef struct{
    char ch1;
    int num;
    char ch2;
}tmp1;
int main(){
    printf("sizeof(tmp)是%d\n",sizeof(tmp));
    printf("sizeof(tmp1)是%d\n",sizeof(tmp1));
    return 0;
}
