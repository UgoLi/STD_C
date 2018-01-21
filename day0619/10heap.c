/*************************************************************************
	> File Name: 10heap.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月19日 星期一 16时03分12秒
 ************************************************************************/
//动态分配内存

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int *creat(int num/*彩票数字个数*/){
    int *p_num=(int *)malloc(num*sizeof(int));
    if(p_num){
        int num1=0;
        for(num1=0;num1<=num-1;num1++){
            *(p_num+num1)=rand()%36+1;
        }
        /*
         * 不能释放，需要返回值
         * free(p_num);  
         * p_num=NULL;
         */
    }
    return p_num;
}
int main(){
    srand(time(0));
    int *p_num=NULL;
    p_num=creat(7);
    if(p_num){
        int i=0;
        for(i=0;i<=6;i++){
            printf("%d ",*(p_num+i));
        }
        printf("\n");
        free(p_num);
        p_num=NULL;
    }
    return 0;
}
