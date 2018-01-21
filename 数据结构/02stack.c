/*************************************************************************
	> File Name: 02stack.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月01日 星期六 22时57分02秒
 ************************************************************************/


#include"02stack.h"

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
int stack_empty(const stack *p_stack){
    if(!link_size(&(p_stack->lnk))){
        return 1;
    }
    else{
        return 0;
    }
}

//函数--栈满判断
int stack_full(const stack *p_stack){
    return 0;
}

//函数--入栈
void stack_push(stack *p_stack,int value){
    link_add_first(&(p_stack->lnk),value);
}

//函数--取值并出栈（删除）
int stack_pop(stack *p_stack,int *p_value){
    int tmp=link_get_first(&(p_stack->lnk),p_value);
    if(tmp){
        link_remove_first(&(p_stack->lnk));
    }
    return tmp;
}

//函数--获取栈值（不删除）
int stack_top(const stack *p_stack,int *p_value){
    int tmp=link_get_first(&(p_stack->lnk),p_value);
    return tmp;
}



