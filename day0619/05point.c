/*************************************************************************
	> File Name: 05point.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月19日 星期一 10时40分15秒
 ************************************************************************/
/*二级指针*/
#include<stdio.h>
typedef struct
{
    int row,col;
}pt;
typedef struct
{
    pt center;
    int radius;
}circle;
/*
circle  larger(const circle *p_cl1,const circle *p_cl2)
{
    return (circle*) p_cl1->radius >=p_cl2->radius?p_cl1:p_cl2;
}
*/
void larger (const circle *p_cl1,const circle *p_cl2,circle **pp_cl)
{
    *pp_cl=(circle*)( p_cl1->radius>=p_cl2->radius)?p_cl1:p_cl2;
}
int main(){
    circle  cl1={4,4,6},cl2={3,3,7};
    circle *p_cl=NULL;
    larger(&cl1,&cl2,&p_cl);
    printf("较大的圆是（%d，%d），%d\n",p_cl->center.row,p_cl->center.col,p_cl->radius);
    return 0;
}
