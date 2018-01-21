/*
 * 编写函数计算两个双精度浮点型数字的和并把结果传递给调用函数
 * */
#include<stdio.h>
double add(double a,double b){
    return a+b;
}
int main(){
    printf("请输入两个浮点型数字：");
    double a,b;
    scanf("%lg%lg",&a,&b);
    printf("和为:%lg\n",add(a,b));
    return 0;
}
