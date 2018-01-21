/*************************************************************************
	> File Name: 01link.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月23日 星期五 09时40分05秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"01link.h"
//函数--初始化
void link_init(link *p_link){
    p_link->head.p_next=&(p_link->tail);
    p_link->tail.p_prev=&(p_link->head);
    p_link->tail.p_next=NULL;
    p_link->head.p_prev=NULL;
    p_link->p_cur=NULL;
}
//函数--清理
void link_deinit(link *p_link){
    while(p_link->head.p_next!=&(p_link->tail)){
        node *p_first=&(p_link->head);
        node *p_mid=p_first->p_next;
        node *p_last=p_mid->p_next;
        p_first->p_next=p_last;
        p_last->p_prev=p_first;
        free(p_mid);
        p_mid=NULL;
    }
    p_link->p_cur=NULL;
}
//函数--统计有效数字
int link_size(const link *p_link){
    const node *p_node=NULL;
    int cnt=0;       //务必初始化
    for(p_node=&(p_link->head);p_node!=&(p_link->tail);p_node=p_node->p_next){
        const node *p_first=p_node;
        const node *p_mid=p_first->p_next;
        const node *p_last=p_mid->p_next;
        if(p_mid!=&(p_link->tail)){
            cnt++;
        }
    }
    return cnt;
}
//函数--最前面加入数字
void link_add_head(link *p_link,int value){
    node *p_first=NULL,*p_mid=NULL,*p_last=NULL;
    node *p_node=(node *)malloc(sizeof(node));
    if(!p_node){
        return;
    }
    //分配成功后赋值给节点
    p_node->num=value;
    p_node->p_next=NULL;
    p_node->p_prev=NULL;
    //将节点插入
    p_first->p_next=p_node;
    p_node->p_prev=p_first; 
    p_node->p_next=p_mid;
    p_mid->p_prev=p_node;
    p_mid->p_next=p_last;
    p_last->p_prev=p_mid;

    p_link->p_cur=NULL;
}
//函数--最后面加入数字
/*void link_append(link *p_link,int value){
    p_link->p_cur=NULL;
}*/
void link_append(link *p_link,int value){
    node *p_first=NULL,*p_mid=NULL,*p_last=NULL;
    node *p_node =(node *)malloc(sizeof(node));
    if(!p_node){
        return ;
    }
    p_node->num=value;
    p_node->p_next=NULL;
    p_node->p_prev=NULL;

    p_first=p_link->tail.p_prev;
    p_mid=p_first->p_next;
    p_last=p_mid->p_next;

    p_first->p_next=p_node;
    p_node->p_prev=p_first;
    p_node->p_next=p_mid;
    p_mid->p_prev=p_node;
    
    p_link->p_cur=NULL;
}

//函数--按从小到大插入
void link_insert(link *p_link,int value){
    node *p_node =(node *)malloc(sizeof(node));
    if(!p_node){
        return;
    }
    p_node->num=value;
    p_node->p_prev=NULL;
    p_node->p_next=NULL;
    node *p_tmp=NULL;
    for(p_tmp =&(p_link->head);p_tmp!=&(p_link->tail);p_tmp=p_tmp->p_next){
        node *p_first=p_tmp;
        node *p_mid=p_first->p_next;
        node *p_last=p_mid->p_next;
        if(p_mid->num>p_node->num||p_mid==&(p_link->tail)){
            p_first->p_next=p_node;
            p_node->p_prev=p_first;
            p_node->p_next=p_mid;
            p_mid->p_prev=p_node;
            break;
        }
    }
    p_link->p_cur=NULL;
}
//函数--删除第一个有效节点
void link_remove_head(link *p_link){
    node *p_first=&(p_link->head);
    node *p_mid=p_first->p_next;
    node *p_last=p_mid->p_next;
    if(!link_size(p_link)){
        p_first->p_next=p_last;
        p_last->p_prev=p_first;
        free(p_mid);
        p_mid=NULL;
    }
    p_link->p_cur=NULL;
}
//函数--删除最后一个有效节点
/*void link_remove_tail(link *p_link){
    //if(link_size(p_link)){
    //    return;
    //}
    node *p_node=NULL;
    for(p_node=&(p_link->head);p_node!=&(p_link->tail);p_node=p_node->p_next){
        node *p_first=p_node;
        node *p_mid=p_first->p_next;
        node *p_last=p_mid->p_next;
        if(p_last==&(p_link->tail)){
            p_first->p_next=p_last;
            free(p_mid);
            p_mid=NULL;
            break;
        }
    }
    p_link->p_cur=NULL;
}*/
void link_remove_tail(link *p_link){
    node *p_first=NULL,*p_mid=NULL,*p_last=NULL;
    //判断有无有效点
    if(p_link->head.p_next==&(p_link->tail)){
        return;
    }
    //有效点模块定义
    p_first=p_link->tail.p_prev->p_prev;
    p_mid=p_first->p_next;
    p_last=p_mid->p_next;
    //释放最后一个有效点
    p_last->p_prev=p_first;
    p_first->p_next=p_last;
    free(p_mid);
    p_mid=NULL;
}

//函数--删除某个数字所在的节点
void link_remove(link *p_link,int value){
    node *p_node=NULL;
    for (p_node=&(p_link->head);p_node!=&(p_link->tail);p_node=p_node->p_next){
        node *p_first=p_node;
        node *p_mid=p_first->p_next;
        node *p_last=p_mid->p_next;
        if(p_mid->num==value&&p_mid!=&(p_link->tail)){
            p_first->p_next=p_last;
            p_last->p_prev=p_first;
            free(p_mid);
            p_mid=NULL;
            break;
        }
    }
    p_link->p_cur=NULL;
}
//函数--获得第一个有效数字
int link_get_head(const link *p_link,int *p_num){
    const node *p_first=NULL,*p_mid=NULL,*p_last=NULL;
    if(p_link->head.p_next==&(p_link->tail)){
        return 0;
    }
    else{
        p_first=&(p_link->head);
        p_mid=p_first->p_next;
        p_last=p_mid->p_next;
        *p_num=p_mid->num;
        return 1;
    }
}
//函数--获得最后一个有效数字
/*int link_get_tail(const link *p_link,int *p_num){
    const node *p_node;
    for(p_node=&(p_link->head);p_node!=&(p_link->tail);p_node=p_node->p_next){
        const node *p_first=p_node;
        const node *p_mid=p_first->p_next;
        const node *p_last=p_mid->p_next;
        if(p_last==&(p_link->tail)){
            *p_num=p_mid->num;
            return 1;
        }
    }
    return 0;
}*/            
//（双向链表）
int link_get_tail(const link *p_link,int *p_num){
    const node *p_first=NULL,*p_mid=NULL,*p_last=NULL;
    if(p_link->head.p_next==&(p_link->tail)){
        return 0;
    }
    else{
        p_first=p_link->tail.p_prev->p_prev;
        p_mid=p_first->p_next;
        p_last=p_mid->p_next;
        //找到最后一个有效数值
        *p_num=p_mid->num;
        return 1;
    }
}
//函数--更据编号得到有效数字
int link_get(const link *p_link,int *p_num,int num){
    const node *p_node=NULL;
    int cnt=0;
    for (p_node=&(p_link->head);p_node!=&(p_link->tail);p_node=p_node->p_next){
        const node *p_first=p_node;
        const node *p_mid =p_first->p_next;
        const node *p_last=p_mid->p_next;
        if(p_mid!=&(p_link->tail)&&cnt==num){
            *p_num=p_mid->num;
            return 1;
        }
        cnt++;
    }
    return 0;
}
//函数--准备从前向后遍历链表
void link_begin(link *p_link){
    p_link->p_cur=&(p_link->head);
}
//函数--遍历
int link_next(link *p_link,int *p_num){
    if(!(p_link->p_cur)){
        return 0;
    }
    p_link->p_cur=p_link->p_cur->p_next;
    if(p_link->p_cur==&(p_link->tail)){
        p_link->p_cur=NULL;
        return 0;
    }
    else{
        *p_num=p_link->p_cur->num;
        return 1;
    }
}











