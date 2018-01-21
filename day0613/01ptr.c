/*
 * 得到三个整数，输出到屏幕上（从大到小）,指针
 */
#include<stdio.h>
int main(){
    int num1=0,num2=0,num3=0,tmp=0;
    int *p_num1=&num1,*p_num2=&num2,*p_num3=&num3,*p_tmp=&tmp;
    printf("请输入三个数字:");
    scanf("%d%d%d",p_num1,p_num2,p_num3);
    /*
     *交换值
     *
    if(*p_num1>*p_num2){
        *p_tmp=*p_num1;
        *p_num1=*p_num2;
        *p_num2=*p_tmp;
    }
    if(*p_num1>*p_num3){
        *p_tmp=*p_num1;
        *p_num1=*p_num3;
        *p_num3=*p_tmp;
    }
    if(*p_num2>*p_num3){
        *p_tmp=*p_num2;
        *p_num2=*p_num3;
        *p_num3=*p_tmp;
    }
    */
    //交换址
    if(*p_num1>*p_num2){
        p_tmp=p_num1;
        p_num1=p_num2;
        p_num2=p_tmp;
    }
    if(*p_num1>*p_num3){
        p_tmp=p_num1;
        p_num1=p_num3;
        p_num3=p_tmp;
    }
    if(*p_num2>*p_num3){
        p_tmp=p_num2;
        p_num2=p_num3;
        p_num3=p_tmp;
    }
    printf("%d %d %d\n",*p_num1,*p_num2,*p_num3);
    return 0;
}
