/*************************************************************************
	> File Name: 03main.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月21日 星期三 16时55分56秒
 ************************************************************************/

#include<stdio.h>
#include"03data.h"
node head={0},tail={0};
int main(){
    head.p_next=&tail;
    node add1={5},add2={5};
    dataStruct_add(&add1);
    dataStruct_add(&add2);
    dataStruct_out();
    return 0;
}
