/*
 *编写宏计算两个整数的差
 *宏表达式参数需要小括号保证优先级
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define SUB(a,b) ((a)-(b))
int main(){
    int a=0,b=0;
    char num[10]={0};
    printf("请输入两个整数：");
    fgets(num,10,stdin);
    if (strlen(num)==10&&num[9]!='\n'){
        scanf("%*[^\n]");
        scanf("%*c");
    }
    sscanf(num,"%d %d",&a,&b);
    printf("a,b的差值为：%d\n",SUB(a,b));
    return 0;
}

