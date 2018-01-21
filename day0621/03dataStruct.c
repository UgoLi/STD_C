/*************************************************************************
	> File Name: 03dataStruct.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月21日 星期三 16时48分22秒
 ************************************************************************/

#include<stdio.h>
#include"03data.h"
//向链式物理结构中顺序添加新节点-函数
/*node head={0},tail={0};
head.p_next=&tail;*/

void dataStruct_add(node *new){
    node *p_node=NULL;
    //printf("加入的新值为%d\n",new->num);
    for(p_node=&head;p_node!=&tail;p_node=p_node->p_next){
        node *p_first=p_node;
        node *p_mid=p_first->p_next;
        node *p_last=p_mid->p_next;
        if(p_mid->num>new->num||p_mid==&tail){
            p_first->p_next=new;
            new->p_next=p_mid;
            //printf("1\n");
            break;
        }
    } 
}
//输出链式物理结构中的有效节点
void dataStruct_out(void){
    node *p_node=NULL;
    int cnt=0;
    for(p_node=&head;p_node!=&tail;p_node=p_node->p_next){
        node *p_first=p_node;
        node *p_mid=p_first->p_next;
        node *p_last=p_mid->p_next;
        if(p_mid!=&tail){
            printf("%d ",p_mid->num);
            cnt++;
        }
    }
    printf("\n有效字节数为:%d",cnt);
    printf("\n");
}

