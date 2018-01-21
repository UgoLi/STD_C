/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月30日 星期五 16时36分00秒
 ************************************************************************/

#include<stdio.h>
#include"./head/01link.h"
#include<printf_color.h>
int main(void){
    link_my lnk={0};
    int num=0,i=0;
    link_init(&lnk);
#if 1
    //顺序添加数字
    printf("=="RED"顺序添加数字"NONE"==========================================================\n");
    printf("操作后：\nhead"GREEN"->"NONE);
    link_begin(&lnk);
    for(i=0;i<=link_size(&lnk)-1;i++){
        link_next(&lnk,&num);
        printf("%d"GREEN"->"NONE,num);
    }
    printf("tail"GREEN"->\n"NONE);
    //===================================================
    for(i=0;i<=10;i++){
        link_insert(&lnk,i*10);
    }
    link_insert(&lnk,55);
    printf("有效节点数量：%d\n",link_size(&lnk));
    link_get_first(&lnk,&num);
    printf("头节点内容  ：%d\n",num);
    link_get_last(&lnk,&num);
    printf("尾节点内容  ：%d\n",num);
    //===================================================
    printf("操作后：\nhead"GREEN"->"NONE);
    link_begin(&lnk);
    for(i=0;i<=link_size(&lnk)-1;i++){
        link_next(&lnk,&num);
        printf("%d"GREEN"->"NONE,num);
    }
    printf("tail"GREEN"->\n"NONE);
#endif
#if 1
    //头插入，尾插入
    printf("=="RED"头插入，尾插入"NONE"========================================================\n");
    printf("操作后：\nhead"GREEN"->"NONE);
    link_begin(&lnk);
    for(i=0;i<=link_size(&lnk)-1;i++){
        link_next(&lnk,&num);
        printf("%d"GREEN"->"NONE,num);
    }
    printf("tail"GREEN"->\n"NONE);
    //===================================================
    link_add_first(&lnk,-10);
    link_add_last(&lnk,120);

    printf("有效节点数量：%d\n",link_size(&lnk));
    link_get_first(&lnk,&num);
    printf("头节点内容  ：%d\n",num);
    link_get_last(&lnk,&num);
    printf("尾节点内容  ：%d\n",num);
    //===================================================
    printf("操作后：\nhead"GREEN"->"NONE);
    link_begin(&lnk);
    for(i=0;i<=link_size(&lnk)-1;i++){
        link_next(&lnk,&num);
        printf("%d"GREEN"->"NONE,num);
    }
    printf("tail"GREEN"->\n"NONE);
#endif
#if 1
    //头移除，尾移除
    printf("=="RED"头移除，尾移除"NONE"========================================================\n");
    printf("操作后：\nhead"GREEN"->"NONE);
    link_begin(&lnk);
    for(i=0;i<=link_size(&lnk)-1;i++){
        link_next(&lnk,&num);
        printf("%d"GREEN"->"NONE,num);
    }
    printf("tail"GREEN"->\n"NONE);
    //===================================================
    link_remove_first(&lnk);
    link_remove_last(&lnk);

    printf("有效节点数量：%d\n",link_size(&lnk));
    link_get_first(&lnk,&num);
    printf("头节点内容  ：%d\n",num);
    link_get_last(&lnk,&num);
    printf("尾节点内容  ：%d\n",num);
    //===================================================
    printf("操作后：\nhead"GREEN"->"NONE);
    link_begin(&lnk);
    for(i=0;i<=link_size(&lnk)-1;i++){
        link_next(&lnk,&num);
        printf("%d"GREEN"->"NONE,num);
    }
    printf("tail"GREEN"->\n"NONE);
#endif
#if 1
    //指定节点删除
    printf("=="RED"指定节点删除"NONE"==========================================================\n");
    printf("操作后：\nhead"GREEN"->"NONE);
    link_begin(&lnk);
    for(i=0;i<=link_size(&lnk)-1;i++){
        link_next(&lnk,&num);
        printf("%d"GREEN"->"NONE,num);
    }
    printf("tail"GREEN"->\n"NONE);
    //===================================================
    link_remove(&lnk,0);
    link_remove(&lnk,55);
    link_remove(&lnk,10);

    printf("有效节点数量：%d\n",link_size(&lnk));
    link_get_first(&lnk,&num);
    printf("头节点内容  ：%d\n",num);
    link_get_last(&lnk,&num);
    printf("尾节点内容  ：%d\n",num);
    //===================================================
    printf("操作后：\nhead"GREEN"->"NONE);
    link_begin(&lnk);
    for(i=0;i<=link_size(&lnk)-1;i++){
        link_next(&lnk,&num);
        printf("%d"GREEN"->"NONE,num);
    }
    printf("tail"GREEN"->\n"NONE);
#endif
    link_deinit(&lnk);
    printf("=="RED"link_test.c success"NONE"===================================================\n");
    return 0;
}

















