/*************************************************************************
	> File Name: 06quik_sort_review.c
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年07月25日 星期二 19时59分56秒
 ************************************************************************/

#include<stdio.h>
void quik_sort(int *p_num,int size){
    int base=*p_num;
    int *p_start=p_num,*p_end=p_num+size-1,tmp;
    if(size<=1)return;
    while(p_start<p_end){
        if(*p_start>*p_end){
            tmp=*p_end;
            *p_end=*p_start;
            *p_start=tmp;
        }
        if(*p_start==base)p_end--;
        else p_start--;
    }
    quik_sort(p_num,p_start-p_num);
    quik_sort(p_start+1,p_num+size-1-(p_start+1));
}

int main(void){
    int a[7]={10,30,50,20,40,60,0};
    quik_sort(a,7);
    int i;
    for(i=0;i<7;i++)
    printf("%d ",a[i]);
    printf("\n");
    return 0;
}




