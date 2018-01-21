/*
 *条件编译演示
 *商店：精品 普通 折扣
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main(){
#if      defined(GONGCHANG)
    printf("80%%\n");
#elif   !defined(GONGCHANG) && !defined(JINGPIN)
    printf("100%%\n");
#else
    printf("120%%\n");
#endif
    return 0;
}
