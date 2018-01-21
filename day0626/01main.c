/*************************************************************************
	> File Name: 01main.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月26日 星期一 14时04分37秒
 ************************************************************************/
//树测试

#include<stdio.h>
#include "01tree.h"
void print_cb(int num){
    printf("%d ",num);
}
int main(){
    tree tr={0};
    tree_init(&tr);
    tree_insert(&tr,50);
    tree_insert(&tr,25);
    tree_insert(&tr,12);
    tree_insert(&tr,37);
    tree_insert(&tr,75);
    tree_insert(&tr,66);
    tree_insert(&tr,85);
    tree_insert(&tr,80);
    tree_insert(&tr,90);
    tree_insert(&tr,87);
    tree_miter(&tr,print_cb); 
    printf("\n");
    printf("树的高度：%d\n",tree_height(&tr));
    tree_remove(&tr,75);
    tree_miter(&tr,print_cb); 
    printf("\n");
    printf("树的高度：%d\n",tree_height(&tr));
    tree_deinit(&tr);
    return 0;
}
