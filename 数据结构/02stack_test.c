/*************************************************************************
	> File Name: stack_test.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月02日 星期日 19时58分31秒
 ************************************************************************/

#include<stdio.h>
#include"02stack.h"
#include<unistd.h>
#define MOVETO(x,y) printf("\033[%d;%dH",(x),(y))

int main(){
    stack stk={0};
    int i=0,num=0,ret=0;
    MOVETO(1,0);
    printf("***********************stack_test.c*************************\n");
    for(i=0;i<=24;i++){
        printf("%40c\n",'|');
    }
    stack_init(&stk);
    MOVETO(2,0);
    printf("|        判空：%d",stack_empty(&stk));
    MOVETO(3,0);
    printf("|        判满：%d\n",stack_full(&stk));
    MOVETO(4,0);
    printf("|        有效：%d",stack_size(&stk));
    MOVETO(5,0);
    printf("************************************************************");
    MOVETO(6,0);
    printf("|        数据入栈后。。。");
    //入栈
    for(i=0;i<10;i++){
        stack_push(&stk,i*10);
    }
    MOVETO(7,0);
    printf("|        判空：%d",stack_empty(&stk));
    MOVETO(8,0);
    printf("|        判满：%d",stack_full(&stk));
    MOVETO(9,0);
    printf("|        有效：%d",stack_size(&stk));
    ret=stack_top(&stk,&num);
    if(!ret){
    MOVETO(10,0);
    printf("\r|        当前栈顶内容：NULL");
    }
    else
    MOVETO(11,0);
    printf("\r|        当前栈顶内容：%d",num);
    MOVETO(12,0);
    printf("************************************************************");
    //取值&出栈
    stack_pop(&stk,&num);
    MOVETO(13,0);
    printf("\r|        取栈顶值：%d",num);
    MOVETO(14,0);
    printf("\r|        判空：%d",stack_empty(&stk));
    MOVETO(15,0);
    printf("\r|        判满：%d",stack_full(&stk));
    MOVETO(16,0);
    printf("\r|        有效：%d",stack_size(&stk));
    ret=stack_top(&stk,&num);
    if(!ret){
    MOVETO(17,0);
    printf("\r|        当前栈顶内容：NULL");
    }
    else
    MOVETO(18,0);
    printf("\r|        当前栈顶内容：%d",num);
    MOVETO(19,0);
    printf("************************************************************");
    //清理栈
    stack_deinit(&stk);
    MOVETO(20,0);
    printf("\r|        清理栈后。。。");
    MOVETO(21,0);
    printf("\r|        判空：%d",stack_empty(&stk));
    MOVETO(22,0);
    printf("\r|        判满：%d",stack_full(&stk));
    MOVETO(23,0);
    printf("\r|        有效：%d",stack_size(&stk));
    ret=stack_top(&stk,&num);
    if(!ret){
    MOVETO(24,0);
    printf("\r|        当前栈顶内容：NULL");
    }
    else
    MOVETO(25,0);
    printf("\r|        当前栈顶内容：%d",num);
    MOVETO(26,0);
    printf("***************************END******************************\n");
    return 0;
}
