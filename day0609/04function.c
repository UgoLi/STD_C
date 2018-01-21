/*返回值演示*/
#include<stdio.h>
int read(void){
    printf("输入一个整数:");
    int num=0;
    scanf("%d",&num);
    return num;
}
int main(){
    printf("输入的数字是：%d\n",read());
    return 0;
}
