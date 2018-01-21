/*************************************************************************
	> File Name: 01link.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月22日 星期四 22时22分50秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int num;
    struct node *p_next;
}node;
int main(){
    node head={0},tail={0};
    head.p_next=&tail;
    int value=0;
    node *p_node=NULL;  //循环变量
    while(1){
        printf("请输入一个整数：");
        scanf("%d",&value);
        if(value<0){
            printf("输入结束！\n");
            break;
        }
        node *p_new=(node *)malloc(sizeof(node));
        p_new->num=value;
        p_new->p_next=NULL;
        for(p_node=&head;p_node!=&tail;p_node=p_node->p_next){
            node *p_first=p_node;
            node *p_mid=p_first->p_next;
            node *p_last=p_mid->p_next;
            if(p_mid->num>p_new->num||p_mid==&tail){
                p_first->p_next=p_new;
                p_new->p_next=p_mid;
                break;
            }
        }

    }
    printf("打印链式物理结构中的数据：\n");
    for(p_node=&head;p_node!=&tail;p_node=p_node->p_next){
        node *p_first=p_node;
        node *p_mid=p_first->p_next;
        node *p_last=p_mid->p_next;
        if(p_mid!=&tail){
            printf("%d ",p_mid->num);
        }
    }
    printf("\n");
    for(p_node=&head;p_node!=&tail;p_node=p_node->p_next){
        node *p_first=p_node;
        node *p_mid=p_first->p_next;
        node *p_last=p_mid->p_next;
        if(p_mid!=&tail){
            p_first->p_next=p_last;
        }
    }
    return 0;
}
