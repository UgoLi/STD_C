/*************************************************************************
	> File Name: 02dataStruct.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月21日 星期三 14时01分24秒
 ************************************************************************/

#include<stdio.h>
typedef struct node{
    int num;
    struct node *p_next;
}node;
int main()
{
    node node1={3},node2={5},node3={7},head={0},tail={0},node4={6};
    head.p_next=&tail;/*&node1;
    node1.p_next=&node2;
    node2.p_next=&node3;
    node3.p_next=&tail;*/
    //链式物理结构for循环框架
    node *p_node=NULL;    //循环结构体==循环变量

    for(p_node=&head;p_node!=&tail;p_node=p_node->p_next){
        node *p_first=p_node;
        node *p_mid=p_first->p_next;
        node *p_last=p_mid->p_next;
        if(p_mid!=&tail){
            printf("%d ",p_mid->num);
        }
        /*
        node vitrual=*p_node->p_next;
        if(p_node!=&tail){
            printf("%d ",vitrual.num);
        }
        */
    }
    printf("\n");
    //随机访问数据能力
    int cnt=0;
    for(p_node=&head;p_node!=&tail;p_node=p_node->p_next){
            node *p_first=p_node;
            node *p_mid=p_first->p_next;
            node *p_last=p_mid->p_next;
            if(p_mid!=&tail&&cnt==1){
                printf("数字是%d\n",p_mid->num);
            }
            cnt++;
    }
    //把新节点node4按顺序插入到链式物理结构中
    for(p_node=&head;p_node!=&tail;p_node=p_node->p_next){
        node *p_first=p_node;
        node *p_mid=p_first->p_next;
        node *p_last=p_mid->p_next;
        if(p_mid->num>node4.num||p_mid==&tail){
            p_first->p_next=&node4;
            node4.p_next=p_mid;
            break;
        }
    }
    //插入后重新输出 
    for(p_node=&head;p_node!=&tail;p_node=p_node->p_next){
        node *p_first=p_node;
        node *p_mid=p_first->p_next;
        node *p_last=p_mid->p_next;
        if(p_mid!=&tail){
            printf("%d ",p_mid->num);
        }
    }
    printf("\n");
    //链式物理结构删除节点操作,删除num=5的节点
    for(p_node=&head;p_node!=&tail;p_node=p_node->p_next){
        node *p_first=p_node;
        node *p_mid=p_first->p_next;
        node *p_last=p_mid->p_next;
        if(p_mid->num==5&&p_mid!=&tail){
            p_first->p_next=p_last;    //前节点，越过当前节点，直接指向后节点
            break;
        }
    }
    //删除后重新输出
    for(p_node=&head;p_node!=&tail;p_node=p_node->p_next){
        node *p_first=p_node;
        node *p_mid=p_first->p_next;
        node *p_last=p_mid->p_next;
        if(p_mid!=&tail){
            printf("%d ",p_mid->num);
        }
    }
    printf("\n");
    //删除最后一个有效节点
    for(p_node=&head;p_node!=&tail;p_node=p_node->p_next){
        node*p_first=p_node;
        node*p_mid=p_first->p_next;
        node*p_last=p_mid->p_next;
        if(p_last==&tail){
            p_first->p_next=p_last;
            break;
        }
    }
    //删除后重新输出
    cnt=0;
    for(p_node=&head;p_node!=&tail;p_node=p_node->p_next){
        node *p_first=p_node;
        node *p_mid=p_first->p_next;
        node *p_last=p_mid->p_next;
        if(p_mid!=&tail){
            printf("%d ",p_mid->num);
            cnt++;
        }
    }
    printf("\n");
    printf("有效节点数：%d\n",cnt);
    return 0;
}
