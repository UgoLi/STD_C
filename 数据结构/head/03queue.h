/*************************************************************************
	> File Name: 03queue.h
	> Author: 
	> Mail: 
	> Created Time: 2017年07月04日 星期二 10时36分48秒
 ************************************************************************/
#ifndef _03QUEUE_H
#define _03QUEUE_H

#include<stdio.h>
#include"01link.h"
typedef struct{
    link_my lnk;
}queue;
//函数--初始化
void queue_init(queue *);
//函数--清理
void queue_deinit(queue *);
//函数--有效个数
int queue_size(queue *);
//函数--判空
int queue_empty(queue *);
//函数--判满
int queue_full(queue *);
//函数--进队列
int queue_push(queue *,int);
//函数--出队列
int queue_pop(queue *,int *);
//函数--队列前端查询
int queue_get_first(queue *,int *);

#endif //_03QUEUE_H
