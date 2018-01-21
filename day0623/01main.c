/*************************************************************************
	> File Name: 01main.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月23日 星期五 11时47分47秒
 ************************************************************************/

#include<stdio.h>
#include"01link.h"
int main(){
    link lnk={0};link_init(&lnk);   //声明并初始化lnk
    int val=0,num=0;
    for(val=0;val<=10;val++){
        link_insert(&lnk,val*10);
    }
    link_get_head(&lnk,&num);
    printf("最前面的有效数字：%d\n",num);
    link_get_tail(&lnk,&num);
    printf("最后面的有效数字：%d\n",num);
    int size=link_size(&lnk);
    printf("有效个数：%d\n",size);
    for(val=0;val<=size-1;val++){
        link_get(&lnk,&num,val);
        printf("%d ",num);
    }
    printf("\n");
    link_begin(&lnk);
    while(1){
        if(!link_next(&lnk,&num)){
            break;
        }
        printf("%d ",num);
    }
    printf("\n");
    link_deinit(&lnk);
    return 0;
}
