/*************************************************************************
	> File Name: 03data.h
	> Author: 
	> Mail: 
	> Created Time: 2017年06月21日 星期三 16时56分26秒
 ************************************************************************/

#ifndef _03DATA_H
#define _03DATA_H
//定义一个链式物理结构
typedef struct node{
    int num;
    struct node *p_next;
}node;
extern node head,tail;
//声明对此链式物理结构的处理函数
void dataStruct_add(node*);
void dataStruct_out(void);
#endif //_03DATA_H
