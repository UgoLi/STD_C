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
}
//函数--进队列
void queue_push(queue *p_queue,int value){
    if(p_queue->qty==SIZE){
        printf("\n队满！进队失败。\n");
        return;
    }
    p_queue->arr[p_queue->tail]=value;
    p_queue->tail++;
    if(p_queue->tail==SIZE){
        p_queue->tail=0;
    }
    p_queue->qty++;
}
//函数--出队列
int queue_pop(queue *p_queue,int *value){
    if(!p_queue->qty){
        printf("\n空队列！出队失败。\n");
        return 0;
    }
    *value=p_queue->arr[p_queue->head];
    p_queue->arr[p_queue->head]=0;
    p_queue->head++;
    p_queue->qty--;
    if(p_queue->head==SIZE){
        p_queue->head=0;
    }
    return 1;
}
//函数--队列前端查询
int queue_front(const queue *p_queue,int *value){
    if(!p_queue->qty){
        printf("\n空队列！查询失败。\n");
        return 0;
    }
    *value=p_queue->arr[p_queue->head];
    return 1;
}
int main(){
    queue que={0};
    int num=0;
    int fb=0;
    queue_init(&que);
    fb=queue_front(&que,&num);
    printf("队前：%d\n",fb?num:0);
    printf("判空：%d\n",queue_empty(&que));
    printf("判满：%d\n",queue_full(&que));
    printf("个数：%d\n",queue_size(&que));
    printf("\n");
    queue_push(&que,1);
    queue_push(&que,3);
    queue_push(&que,5);
    queue_push(&que,7);
    queue_push(&que,9);
    queue_push(&que,11);
    printf("\n");
    fb=queue_front(&que,&num);
    printf("队前：%d\n",fb?num:0);
    printf("判空：%d\n",queue_empty(&que));
    printf("判满：%d\n",queue_full(&que));
    printf("个数：%d\n",queue_size(&que));
    fb=queue_pop(&que,&num);
    if(fb)
    printf("%d ",num);
    fb=queue_pop(&que,&num);
    if(fb)
    printf("%d ",num);
    fb=queue_pop(&que,&num);
    if(fb)
    printf("%d ",num);
    fb=queue_pop(&que,&num);
    if(fb)
    printf("%d ",num);
    fb=queue_pop(&que,&num);
    if(fb)
    printf("%d ",num);
    fb=queue_pop(&que,&num);
    if(fb)
    printf("%d ",num);
    printf("\n");
    fb=queue_front(&que,&num);
    printf("队前：%d\n",fb?num:0);
    printf("判空：%d\n",queue_empty(&que));
    printf("判满：%d\n",queue_full(&que));
    printf("个数：%d\n",queue_size(&que));
    queue_deinit(&que);
    return 0;
}












