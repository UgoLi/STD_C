/*************************************************************************
	> File Name: 02stack.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月23日 星期五 16时25分35秒
 ************************************************************************/

#include<stdio.h>
#include"01link.h"
typedef struct{
    link lnk;
}stack;
//函数--栈初始化
void stack_init(stack *p_stack){
    link_init(&(p_stack->lnk));
}
//函数--栈的清理
void stack_deinit(stack *p_stack){
    link_deinit(&(p_stack->lnk));
}
//函数--栈的有效值
int stack_size(stack *p_stack){
    return link_size(&(p_stack->lnk));
}
//函数--栈空判断
int stack_empty(stack *p_stack){
    return !link_size(&(p_stack->lnk));
}
//函数--栈满判断
int stack_full(stack *p_stack){
    return 0;
}
//函数--入栈
void stack_push(stack *p_stack,int value){
    link_add_head(&(p_stack->lnk),value);
}
//函数--取值并出栈（删除）
int stack_pop(stack *p_stack,int *p_num){
    int ret=link_get_head(&(p_stack->lnk),p_num);
    if(ret){
        link_remove_head(&(p_stack->lnk));
    }
    return ret;
}
//函数--获取栈值（不删除）
int stack_top(const stack *p_stack,int *p_num){
    return link_get_head(&(p_stack->lnk),p_num);
}












