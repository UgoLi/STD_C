/*************************************************************************
	> File Name: 01link.c
	> Author:UgoLi 
	> Mail: 
	> Created Time: 2017年06月23日 星期五 17时52分46秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    //三个域
    int num;                  //节点元素域    
    struct node *p_prev,*p_next;   //节点指针域，链接节点
}node;
typedef struct {
    node head,tail;           //链表默认首尾节点
    node *p_cur;              //遍历链表节点跟踪指针
}link;
/*****************链表操作函数*****************/

/*********函数**初始化*************************/
void link_init(link *p_link){
    p_link->head.p_prev=NULL;
    p_link->head.p_next=&(p_link->tail);
    p_link->tail.p_prev=&(p_link->head);
    p_link->tail.p_next=NULL;

    p_link->p_cur=NULL;
}
/*********函数**清理***************************/
void link_deinit(link *p_link){
    node *p_first=NULL,*p_mid=NULL,*p_last=NULL;
/*while循环过滤空*****************/
    while(p_link->head.p_next!=&(p_link->tail)){
        p_first=&(p_link->head);     //开始位置
        p_mid=p_first->p_next;
        p_last=p_mid->p_next;

        p_first->p_next=p_last;      //释放判——mid
        free(p_mid);
        p_mid=NULL;
    }
    p_link->p_cur=NULL;
}
/*********函数**有效值统计*********************/
int link_size(const link *p_link){
    const node *p_node=NULL;               //循环体
    int cnt=0;
    for(p_node=&(p_link->head);p_node!=&(p_link->tail);p_node=p_node->p_next){
        const node *p_first = p_node;
        const node *p_mid = p_first->p_next;
        const node *p_la = p_mid->p_next;

        if(p_mid!=&(p_link->tail)){
            cnt++;
        }
    }
    return cnt;
}
/*********函数**首端插入***********************/
void link_add_head(link *p_link,int value){
    node *p_node = (node *)malloc(sizeof(node));
    if(!p_node){
        return;
    }
    //内存分配成功要初始化
    p_node->num=value;
    p_node->p_next=NULL;
    p_node->p_prev=NULL;
        
    node *p_first=&(p_link->head);
    node *p_mid=p_first->p_next;
    node *p_last=p_mid->p_next;

    p_first->p_next=p_node;
    p_node->p_prev=p_first;
    p_node->p_next=p_mid;
    p_mid->p_prev=p_node;

    p_link->p_cur=NULL;
}
/*********函数**尾端插入***********************/
void link_append(link *p_link,int value){
    node *p_node=(node *)malloc(sizeof(node));
    if(!p_node){
        return;
    }
    p_node->num=value;
    p_node->p_next=NULL;
    p_node->p_prev=NULL;

    node *p_first=p_link->tail.p_prev->p_prev;
    node *p_mid=p_first->p_next;            //构造p_mid指向尾节点
    node *p_last=p_mid->p_next;
    //在尾节点前插入
    p_first->p_next=p_node;
    p_node->p_prev=p_first;
    p_node->p_next=p_mid;
    p_mid->p_prev=p_node;

    p_link->p_cur=NULL;
}
/*********函数**顺序插入***********************/
void link_insert(link *p_link,int value){
    node *p_node=NULL;
    for(p_node=&(p_link->head);p_node!=&(p_link->tail);p_node=p_node->p_next){
        node *p_first=p_node;
        node *p_mid=p_first->p_next;
        node *p_last=p_mid->p_next;
        if(p_mid->num>value||p_mid==&(p_link->tail)){
            p_first->p_next=p_node;
            p_node->p_prev=p_first;
            p_node->p_next=p_mid;
            p_mid->p_prev=p_node;
        }
    }
    p_link->p_cur=NULL;
}
/*********函数**首端删除***********************/
int link_remove_head(link *p_link){
    node *p_first=&(p_link->head);
    node *p_mid=p_first->p_next;
    node *p_last=p_mid->p_next;
    if(p_mid==&(p_link->tail)){
        return 0;
    }
    p_first->p_next=p_last;
    p_last->p_prev=p_first;
    free(p_mid);
    p_mid=NULL;

    p_link->p_cur=NULL;
    return 1;
}
/*********函数**尾端删除***********************/
int link_remove_tail(link *p_link){
    node *p_first=p_link->tail.p_prev->p_prev;
    node *p_mid=p_first->p_next;
    node *p_last=p_mid->p_next;
    if(p_mid==&(p_link->tail)){
        return 0;
    }
    p_first->p_next=p_last;
    p_last->p_prev=p_first;
    free(p_mid);
    p_mid=NULL;

    p_link->p_cur=NULL;
    return 1;
}
/*********函数**指定编号删除*******************/
int link_remove(link *p_link,int value){
    node *p_node=NULL;
    for(p_node=&(p_link->head);p_node!=&(p_link->tail);p_node=p_node->p_next){
        node *p_first=p_node;
        node *p_mid=p_first->p_next;
        node *p_last=p_mid->p_next;
        if(p_mid!=&(p_link->tail)&&value==p_mid->num){
            p_first->p_next=p_last;
            p_last->p_prev=p_first;
            free(p_mid);
            p_mid=NULL;
            return 1;
        }
        
    }
    return 0;
}
/*********函数**首端查询***********************/
int link_get_head(const link *p_link,int *p_num){
    const node *p_first=&(p_link->head);
    const node *p_mid=p_first->p_next;
    const node *p_last=p_mid->p_next;
    if(p_mid==&(p_link->tail)){
        *p_num=-99999;
        return 0;
    }
    *p_num=p_mid->num;
    return 1;
}
/*********函数**尾端查询***********************/
int link_get_tail(link *p_link,int *p_num){
    const node *p_first=p_link->tail.p_prev->p_prev;
    const node *p_mid=p_first->p_next;
    const node *p_last=p_mid->p_next;
    if(p_mid==&(p_link->tail)){
        return 0;
    }
    *p_num=p_mid->num;
    return 1;
}
/*********函数**指定编号查询*******************/
int link_get(const link *p_link,int *p_num,int val){
    const node *p_node=NULL;
    int cnt=0;
    for(p_node=&(p_link->head);p_node!=&(p_link->tail);p_node=p_node->p_next){
        const node *p_first=p_node;
        const node *p_mid =p_first->p_next;
        const node *p_last=p_mid->p_next;
        if(p_mid!=&(p_link->tail)&&cnt==val){
            *p_num=p_mid->num;
            return 1;
        }
        cnt++;
    }
    return 0;
}
/*********函数**遍历准备***********************/
void link_begin(link *p_link){
    p_link->p_cur=&(p_link->head);
}
/*********函数**遍历开始***********************/
int link_next(link *p_link,int *p_num){
    /*判断是否准备遍历*/
    if(!p_link->p_cur){
        return 0;
    }
    p_link->p_cur=p_link->p_cur->p_next;
    if(p_link->p_cur==&(p_link->tail)){
        return 0;
    }
    else{
        *p_num=p_link->p_cur->num;
        return 1;
    }
}
