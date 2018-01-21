/*************************************************************************
	> File Name: 04tree.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月04日 星期二 15时29分03秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

struct node;
typedef struct{
    struct node *p_node;//tree的根节点
}tree;
typedef struct node{
    int num;
    tree left;
    tree right;
}node;
//函数--初始化
void tree_init(tree *p_tree){
    p_tree->p_node=NULL;
}
//函数--清理
void tree_deinit(tree *p_tree){
    if(!p_tree->p_node){
        return;
    }   
    tree_deinit(&p_tree->p_node->left);
    tree_deinit(&p_tree->p_node->right);
    free(p_tree->p_node);
    p_tree->p_node=NULL;
}
//函数--查找某个数字所在的位置(私有)
tree *tree_search(const tree *p_tree,int value){
    if(!p_tree->p_node){
        return (tree *)p_tree->p_node;
    }
    if(p_tree->p_node->num==value){
        return (tree *)p_tree->p_node;
    }
    else if(p_tree->p_node->num>value){
        return tree_search(&p_tree->p_node->left,value);
    }
    else {
        return tree_search(&p_tree->p_node->right,value); 
    }
}
//函数--插入数据
void tree_insert(tree *p_tree,int value){
    tree *p_tmp=tree_search(p_tree,value);
    if(p_tmp->p_node){   //已经存在和value相等的值
        return;
    }
    //不存在和value值相等的节点
    //新建节点
    node *p_node=(node *)malloc(sizeof(node));
    if(!p_node){
        return;
    }
    p_node->num=value;
    p_node->left.p_node=NULL;
    p_node->right.p_node=NULL;
    //插入新建节点
    p_tmp->p_node=p_node;
}
//函数--有序二杈树中序遍历
void tree_miter(const tree *p_tree,void (*p_func)(int)){
    if(!p_tree->p_node){
        return;
    }
    tree_miter(&p_tree->p_node->left,p_func);
    p_func(p_tree->p_node->num);
    tree_miter(&p_tree->p_node->right,p_func);
}
//函数--有序二杈树前序遍历
void tree_fiter(const tree *p_tree,void (*p_func)(int)){
    if(!p_tree->p_node){
        return;
    }
    p_func(p_tree->p_node->num);
    tree_fiter(&p_tree->p_node->left,p_func);
    tree_fiter(&p_tree->p_node->left,p_func);
}
//函数--有序二杈树后续遍历
void tree_later(const tree *p_tree,void (*p_func)(int)){
    if(!p_tree->p_node){
        return;
    }
    tree_later(&p_tree->p_node->left,p_func);
    tree_later(&p_tree->p_node->right,p_func);
    p_func(p_tree->p_node->num);
}
//函数--有序二杈树删除节点
void tree_del(tree *p_tree,int value){
    tree *p_tmp=tree_search(p_tree , value );
    if(!p_tmp->p_node){   
        //处理无value对应节点的情况
        return ;
    }
    if(!p_tmp->p_node->left.p_node){
        //处理：删除节点无左子树的情况（左右都没有优先进入此情况）
        p_tmp->p_node=p_tmp->p_node->right.p_node;
    }
    else if(!p_tmp->p_node->right.p_node){
        //处理：删除节点无右子树的情况
        p_tmp->p_node=p_tmp->p_node->left.p_node;
    }
    else{
        //处理：删除节点既有左，又有右节点的情况
        //将左子树嫁接到右子树上
        tree *p_tre=tree_search(&p_tree->p_node->right,\
                    p_tree->p_node->left.p_node->num);
        p_tre->p_node=p_tmp->p_node->left.p_node;
        p_tmp->p_node=p_tmp->p_node->right.p_node;
    }
    free(p_tmp->p_node);
    p_tmp->p_node=NULL;
}
//函数--计算树的高度
int tree_height(tree *p_tree){
    if(!p_tree->p_node){
        return 0;
    }
    int left_height=0,right_height=0;
    left_height=tree_height(&p_tree->p_node->left);
    right_height=tree_height(&p_tree->p_node->right);
    return left_height>right_height?(++left_height):(++right_height);
}


