/*************************************************************************
	> File Name: 02stack.h
	> Author: 
	> Mail: 
	> Created Time: 2017年07月01日 星期六 22时57分02秒
 ************************************************************************/

#ifndef _02STACK_H
#define _02STACK_H

#include"01link.h"


typedef struct{
    link_my lnk;
}stack;

//函数--栈初始化
void stack_init(stack *);

//函数--栈的清理
void stack_deinit(stack *);

//函数--栈的有效值
int stack_size(stack *);

//函数--栈空判断
int stack_empty(const stack *);

//函数--栈满判断
int stack_full(const stack *);

//函数--入栈
void stack_push(stack *,int);

//函数--取值并出栈（删除）
int stack_pop(stack *,int *);

//函数--获取栈值（不删除）
int stack_top(const stack *,int *);

#endif    //_02STACK_H
