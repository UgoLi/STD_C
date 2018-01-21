/*************************************************************************
	> File Name: queue_test.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月04日 星期二 11时49分54秒
 ************************************************************************/

#include<stdio.h>
#include"03queue.h"
#include<time.h>
//queue_test.c
int main(){
    printf("**********************queue_test.c********************************\n");
    srand(time(0));
    queue que={0};
    int num=0,i=0;
    //初始化
    printf("初始化。。。\n");
    queue_init(&que);
    printf("判空：    %d\n",queue_empty(&que));
    printf("判满：    %d\n",queue_full(&que));
    printf("有效个数：%d\n",queue_size(&que));
    queue_get_first(&que,&num);
    printf("队首查询：%d\n",num);
    //进队列
    printf("进队列 。。。\n");
    for(i=0;i<10;i++){
        int tmp=rand()%100+1;
        queue_push(&que,tmp);
        printf("%d ",tmp);
    }
    printf("\n");
    printf("判空：    %d\n",queue_empty(&que));
    printf("判满：    %d\n",queue_full(&que));
    printf("有效个数：%d\n",queue_size(&que));
    queue_get_first(&que,&num);
    printf("队首查询：%d\n",num);
    //出队列
    printf("出队列。。。\n");
    for(i=0;i<10;i++){
        queue_pop(&que,&num);
        printf("%d ",num);
    }
    printf("\n");
    printf("判空：    %d\n",queue_empty(&que));
    printf("判满：    %d\n",queue_full(&que));
    printf("有效个数：%d\n",queue_size(&que));
    queue_get_first(&que,&num);
    printf("队首查询：%d\n",num);
    //队清理
    printf("队清理。。。\n");
    queue_push(&que,20);
    queue_deinit(&que);
    printf("判空：    %d\n",queue_empty(&que));
    printf("判满：    %d\n",queue_full(&que));
    printf("有效个数：%d\n",queue_size(&que));
    queue_get_first(&que,&num);
    printf("队首查询：%d\n",num);
    printf("******************************END*********************************\n");
    return 0;
}
