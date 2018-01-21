/*
 *形参演示
 */
#include<stdio.h>
void print(int a,int b){
    printf("输入的两个数为：%d %d\n",a,b);
}
int main(){
    printf("请输入两个整数：");
    int a,b;
    scanf("%d%d",&a,&b);
    print(a,b);
    return 0;
}

