/*
 *条件编译练习
 *1.表示龙虾  2.小鸡炖蘑菇
 *两个版本
 */
#include<stdio.h>
int main(){
    int num=0;
    printf("请输入入菜名编号:");
    scanf("%d",&num);
#ifdef ZHAOBENSHAN
    if(num==1){
        printf("没有\n");
    }
    else if(num==2){
        printf("真没有\n");
    }
#else 
    if(num==1){
        printf("有\n");
    }
    else if(num==2){
        printf("没有\n");
    }
#endif
    return 0;
}
