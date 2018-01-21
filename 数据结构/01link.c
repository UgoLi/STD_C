/*************************************************************************
	> File Name: 01link.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月30日 星期五 10时11分27秒
 ************************************************************************/

#include"./head/01link.h"
/*函数  --初始化
 *功能  --初始化链表
 *返回值--无
 *形参  --link_my *p_link
 * */
void link_init(link_my *p_link){
    //头节点尾指针指向尾节点
    p_link->head.p_next=&(p_link->tail);
    p_link->head.p_prev=NULL;
    //尾节点头指针指向头节点
    p_link->tail.p_prev=&(p_link->head);
    p_link->tail.p_next=NULL;
    p_link->p_cur=NULL;
}
//函数--清理
void link_deinit(link_my *p_link){
    if(p_link->head.p_next==&(p_link->tail)){
        return ;
    }
    node *p_first=&(p_link->head);
    node *p_mid=p_first->p_next;
    node *p_last=p_mid->p_next;
    p_first->p_next=p_last;
    p_last->p_prev=p_first;
    free(p_mid);
    p_mid=NULL;
    
    p_link->p_cur=NULL;
    
    link_deinit(p_link);
}
//函数--统计有效数字
int link_size(const link_my *p_link){
    int cnt=0; 
    const node *p_node=NULL;
    for(p_node=&(p_link->head);p_node!=&(p_link->tail);p_node=p_node->p_next){
        const node *p_first =p_node;
        const node *p_mid=p_first->p_next;
        const node *p_last =p_mid->p_next;
        if(p_mid!=&(p_link->tail)){
            cnt++;
        }
    }
    return cnt;
}
//函数--最前面加入数字
void link_add_first(link_my *p_link,int value){
    node *p_node =(node *)malloc(sizeof(node));
    if(!p_node){
        return;
    }
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
    //p_mid->p_next=p_last;
    //p_last->p_prev=p_mid;

    p_link->p_cur=NULL;
}
//函数--最后面加入数字
void link_add_last(link_my *p_link,int value){
    node *p_node =(node *)malloc(sizeof(node));
    if(!p_node){
        return;
    }
    p_node->num=value;
    p_node->p_next=NULL;
    p_node->p_prev=NULL;
    node *p_first =p_link->tail.p_prev;
    node *p_mid =p_first->p_next;
    node *p_last =p_mid->p_next;
    
    p_first->p_next=p_node;
    p_node->p_prev=p_first;
    p_node->p_next=p_mid;
    p_mid->p_prev=p_node;
    //p_mid->p_next=p_last;
    //p_last->p_prev=p_mid;

    p_link->p_cur=NULL;

}
//函数--按从小到大插入
void link_insert(link_my *p_link,int value){
    node *p_node=(node *)malloc(sizeof(node));
    if(!p_node){
        return ;
    }
    p_node->num=value;
    p_node->p_next=NULL;
    p_node->p_prev=NULL;
    node *p_node1=NULL;
    for(p_node1=&(p_link->head);p_node1!=&(p_link->tail);p_node1=p_node1->p_next){
        node *p_first=p_node1;
        node *p_mid=p_first->p_next;
        node *p_last=p_mid->p_next;
        if(p_mid->num>value||p_mid==&(p_link->tail)){
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
void link_remove_first(link_my *p_link){
    node *p_first=&(p_link->head);
    node *p_mid=p_first->p_next;
    node *p_last=p_mid->p_next;
    if(p_mid==&(p_link->tail)){
        return ;
    }
    p_first->p_next=p_last;
    p_last->p_prev=p_first;
    free(p_mid);
    p_mid=NULL;

    p_link->p_cur=NULL;
}
//函数--删除最后一个有效节点
void link_remove_last(link_my *p_link){
    node *p_first=p_link->tail.p_prev->p_prev;
    node *p_mid=p_first->p_next;
    node *p_last=p_mid->p_next;
    if(p_mid==&(p_link->tail)){
        return;
    }
    p_first->p_next=p_last;
    p_last->p_prev=p_first;
    free(p_mid);
    p_mid=NULL;

    p_link->p_cur=NULL;
}
//函数--删除某个数字所在的节点
void link_remove(link_my *p_link,int value){
    node *p_node=NULL;
    for(p_node=&(p_link->head);p_node!=&(p_link->tail);p_node=p_node->p_next){
        node *p_first=p_node;
        node *p_mid=p_first->p_next;
        node *p_last=p_mid->p_next;
        if(p_mid->num==value&&p_mid!=&(p_link->tail)){
            p_first->p_next=p_last;
            p_last->p_prev=p_first;
            free(p_mid);
            p_mid=NULL;
        }
    }
    p_link->p_cur=NULL;
}
//函数--获取第一个有效数字
int link_get_first(const link_my *p_link,int *p_value){
    const node *p_first=&(p_link->head);
    const node *p_mid=p_first->p_next;
    const node *p_last=p_mid->p_next;
    if(p_mid==&(p_link->tail)){
        *p_value=-1;
        return 0;
    }
    *p_value=p_mid->num;
    return 1;
}
//函数--获取最后一个有效数字
int link_get_last(const link_my *p_link,int *p_value){
    const node *p_first=p_link->tail.p_prev->p_prev;
    const node *p_mid=p_first->p_next;
    const node *p_last=p_mid->p_next;
    if(p_mid==&(p_link->tail)){
        *p_value=-1;
        return 0;
    }
    *p_value=p_mid->num;
    return 1;
}
//函数--根据编号得到有效数字
int link_get(const link_my *p_link,int *p_value,int number){
    int cnt=0;
    const node *p_node=NULL;
    for(p_node=&(p_link->head);p_node!=&(p_link->tail);p_node=p_node->p_next){
        const node *p_first=p_node;
        const node *p_mid=p_first->p_next;
        const node *p_last=p_mid->p_next;
        if(p_mid==&(p_link->tail)){
            *p_value=-1;
            return 0;
        }
        cnt++;
        if(cnt==number&&p_mid!=&(p_link->tail)){
            *p_value=p_mid->num;
            return 1;
        }
    }
}
//函数--准备从前向后遍历
void link_begin(link_my *p_link){
    p_link->p_cur=&(p_link->head);
}
//函数--遍历
//每次返回下个节点内容，遍历指针停在下个节点位置
int  link_next(link_my *p_link,int *p_value){
    if(!p_link->p_cur){
        return 0;
    }
    p_link->p_cur=p_link->p_cur->p_next;
    if(p_link->p_cur!=&(p_link->tail)){
        *p_value=p_link->p_cur->num;
        return 1;
    }
    else{
        p_link->p_cur=NULL;
        return 0;
    }
    
}










