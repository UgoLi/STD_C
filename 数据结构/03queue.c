/*************************************************************************
	> File Name: 03queue.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月04日 星期二 10时36分48秒
 ************************************************************************/


#include"03queue.h"

//函数--初始化
void queue_init(queue *p_queue){
    link_init(&(p_queue->lnk));
}
//函数--清理
void queue_deinit(queue *p_queue){
    link_deinit(&p_queue->lnk);    
}
//函数--有效个数
int queue_size(queue *p_queue){
    return link_size(&(p_queue->lnk));
}
//函数--判空
int queue_empty(queue *p_queue){
    if(!link_size(&(p_queue->lnk))){
        return 1;
    }
    else{
        return 0;
    }
}
//函数--判满
int queue_full(queue *p_queue){
    return 0;
}
//函数--进队列
int queue_push(queue *p_queue,int value){
    //链表不用判断队满
    link_add_last(&(p_queue->lnk),value);
    return 1;
}
//函数--出队列
int queue_pop(queue *p_queue,int *p_value){
    //处理队空的情况
    if(!link_size(&(p_queue->lnk))){
        link_get_first(&(p_queue->lnk),p_value);
        return 0;
    }
    else {
        link_get_first(&(p_queue->lnk),p_value);
        link_remove_first(&(p_queue->lnk));
        return 1;
    }
}
//函数--队列前端查询
int queue_get_first(queue *p_queue,int *p_value){
    //处理队空的情况
    if(!link_size(&(p_queue->lnk))){
        link_get_first(&(p_queue->lnk),p_value);
        return 0;
    }
    else {
        link_get_first(&(p_queue->lnk),p_value);
        return 1;
    }
}

