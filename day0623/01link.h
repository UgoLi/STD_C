/*************************************************************************
	> File Name: 01link.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月23日 星期五 09时40分05秒
 ************************************************************************/
#ifndef _01LINK_H
#define _01LINK_H
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int num;
    struct node *p_next;
    struct node *p_prev;
}node;
typedef struct{
    node head,tail;
    node *p_cur;
}link;
//函数--初始化
void link_init(link *);
//函数--清理
void link_deinit(link *);
//函数--统计有效数字
int link_size(const link *);
//函数--最前面加入数字
void link_add_head(link *p_link,int );
//函数--最后面加入数字
void link_append(link *,int );
//函数--按从小到大插入
void link_insert(link *,int );
//函数--删除第一个有效节点
void link_remove_head(link *);
//函数--删除最后一个有效节点
void link_remove_tail(link *);
//函数--删除某个数字所在的节点
void link_remove(link *,int );
//函数--获得第一个有效数字
int link_get_head(const link *,int *);
//函数--获得最后一个有效数字
int link_get_tail(const link *,int *);
//函数--更据编号得到有效数字
int link_get(const link *,int *,int );
//函数--准备从前向后遍历链表
void link_begin(link *);
//函数--遍历
int link_next(link *,int *);
#endif   //_01LINK_H









