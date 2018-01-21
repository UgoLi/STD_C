/*************************************************************************
	> File Name: 09point.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月19日 星期一 15时12分40秒
 ************************************************************************/
//动态内存分配演示
#include<stdio.h>
#include <stdlib.h>
int main(){
    int *p_num=(int *)malloc(5*sizeof(int));//地址一定是连续的
    /*
    if(p_num){
        //使用动态分配内存
        free(p_num);
        p_num=NULL;
    }
    */
    if(!p_num){
       return 0; 
    }
    //使用动态分配内存
    free(p_num);
    p_num=NULL;
    return 0;
}
