/*************************************************************************
	> File Name: 03point**.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月19日 星期一 10时09分10秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int num=0;
    int *p_num=&num;
    int **pp_num=&p_num;
    **pp_num =10;   //二级指针赋值num变量
    printf("num是%d\n",num);
    *pp_num=NULL;   //加一个表示一级指针
    printf("p_num是%p\n",p_num);
    return 0;
}
