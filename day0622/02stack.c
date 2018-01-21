/*************************************************************************
	> File Name: 02stack.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月22日 星期四 23时00分54秒
 ************************************************************************/
//栈

#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int arr[SIZE];
    int num;  //有效数字
}stack;
//函数--初始化
void stack_init(stack *p_stack){
    p_stack->num=0;
}
//函数--清理
void stack_deinit(stack *p_stack){
    p_stack->num=0;
}
//函数--判空
int stack_empty(const stack *p_stack){
    return !(p_stack->num);
}
//函数--判满
int stack_full(const stack *p_stack){
    return p_stack->num==SIZE;
}
//函数--有效数字
int stack_size(stack *p_stack){
    return p_stack->num;
}
//函数--进栈
void stack_push(stack *p_stack,int value){
    if(p_stack->num>=SIZE){
        printf("栈满！添加失败。\n");
        return;
    }
    p_stack->arr[p_stack->num]=value;
    p_stack->num++;
    return;
}
//函数--出栈
int stack_pop(stack *p_stack,int *value){
    if(p_stack->num<=0){
        printf("栈空！出栈失败。");
        return 0;        
    }    
    *value=p_stack->arr[p_stack->num-1];
    p_stack->num--;
    return 1;
}
//函数--栈顶查看
int stack_top(stack *p_stack,int *value){
    if(p_stack->num<=0){
        printf("栈空！出栈失败。");
        return 0;        
    }    
    *value=p_stack->arr[p_stack->num-1];
    return 1;
}
int main(){
    stack stk={0};
    int num=0;
    stack_init(&stk);
    printf("栈顶：%d\n",num);
    printf("判空：%d\n",stack_empty(&stk));
    printf("判满：%d\n",stack_full(&stk));
    printf("个数：%d\n",stack_size(&stk));
    stack_push(&stk,10);
    stack_push(&stk,20);
    stack_push(&stk,30);
    stack_push(&stk,15);
    stack_push(&stk,15);
    stack_push(&stk,15);
    stack_top(&stk,&num);
    printf("栈顶：%d\n",num);
    printf("判空：%d\n",stack_empty(&stk));
    printf("判满：%d\n",stack_full(&stk));
    printf("个数：%d\n",stack_size(&stk));
    stack_pop(&stk,&num);
    printf("%d ",num);
    stack_pop(&stk,&num);
    printf("%d ",num);
    stack_pop(&stk,&num);
    printf("%d ",num);
    printf("\n");
    printf("栈顶：%d\n",num);
    printf("判空：%d\n",stack_empty(&stk));
    printf("判满：%d\n",stack_full(&stk));
    printf("个数：%d\n",stack_size(&stk));
    return 0;
}











