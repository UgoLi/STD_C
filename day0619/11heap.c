/*************************************************************************
	> File Name: 11heap.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月19日 星期一 16时23分44秒
 ************************************************************************/
//编写函数计算两个点中间位置并把结果传递给调用函数
//要求用动态内存记录中间点位置

#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int row,col;
}pt;
pt *midpt(const pt *p1,const pt *p2){
    int *p_pt=(int *)malloc(2*sizeof(int));
    if(p_pt){
        *p_pt=(p1->row+p2->row)/2;       //p_pt->row=(p1->row+p2->row)/2
        *(p_pt+1)=(p1->col+p2->col)/2;   //p_pt->col=(p1->col+p2->col)/2
    }
    return p_pt;
}
int main()
{
    pt p1={2,2},p2={4,4};
    pt *p_p1=&p1,*p_p2=&p2;
    pt *p_mid=NULL;                      //pt *p_mid=midpt(&p1,p2);
    p_mid= midpt(p_p1,p_p2);
    if(p_mid){
        printf("中间点为（%d,%d）\n",p_mid->row,p_mid->col);
        free(p_mid);
        p_mid =NULL;
    }
    return 0;
}

