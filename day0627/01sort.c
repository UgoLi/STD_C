/*************************************************************************
	> File Name: 03queue.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月23日 星期五 00时17分47秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
typedef struct {
    int arr[SIZE];
    int head;     //队列最前数据下标
    int tail;     //最后一个数据下标+1
    int qty;      //队列中有效数字个数
}queue;
//函数--初始化
void queue_init(queue *p_queue){
    p_queue->head=0;
    p_queue->tail=0;
    p_queue->qty=0;
}
//函数--清理
void queue_deinit(queue *p_queue){
    p_queue->head=0;
    p_queue->tail=0;
    p_queue->qty=0;
}
//函数--有效个数
int queue_size(const queue *p_queue){
    return p_queue->qty;
}
//函数--判满
int queue_full(const queue *p_queue){
    return p_queue->qty==SIZE;
}
//函数--判空
int queue_empty(const queue *p_queue){
    return !p_queue->qty;