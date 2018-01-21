/*************************************************************************
	> File Name: 01link.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月30日 星期五 10时11分27秒
 ************************************************************************/

#ifndef _01LINK_H
#define _01LINK_H

#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int num;             //节点存储内容
    struct node *p_next; //节点头指针
    struct node *p_prev; //节点尾指针
}node;
typedef struct link_my{
    node head,tail;      //头尾节点
    node *p_cur;         //当前遍历位置
}link_my;
/*函数  --初始化
 *功能  --初始化链表
 *返回值--无
 *形参  --link_my*
 * */
void link_init(link_my*);
//函数--清理
void link_deinit(link_my*);
//函数--统计有效数字
int link_size(const link_my*);
//函数--最前面加入数字
void link_add_first(link_my* ,int );
//函数--最后面加入数字
void link_add_last(link_my*,int );
//函数--按从小到大插入
void link_insert(link_my*,int);
//函数--删除第一个有效节点
void link_remove_first(link_my*);
//函数--删除最后一个有效节点
void link_remove_last(link_my*);
//函数--删除某个数字所在的节点
void link_remove(link_my*,int );
//函数--获取第一个有效数字
int link_get_first(const link_my*,int *);
//函数--获取最后一个有效数字
int link_get_last(const link_my*,int *);
//函数--根据编号得到有效数字
int link_get(const link_my*,int *,int );
//函数--准备从前向后遍历
void link_begin(link_my*);
//函数--遍历
//每次返回下个节点内容，遍历指针停在下个节点位置
int  link_next(link_my*,int *);

#endif //_01LINK_H








