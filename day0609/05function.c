/*编写函数从键盘得到两个整数，把他们的和当返回值传递给调用函数
 */
#include<stdio.h>
int plus(void){
    int num1=0,num2=0;
    printf("请输入两个整数：");
    scanf("%d%d",&num1,&num2);
    return num1+num2;
}
int main(){
    printf("和为%d\n",plus());
    return 0;
}
