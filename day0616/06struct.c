/*
 *编写函数计算一个水平长方形的中间点位置并把结果传递给调用函数
 */
#include<stdio.h>
typedef struct{
    int row,col;
}pt;
typedef struct{
    pt pt1,pt2;
}rect;
pt *mid(pt *p_mid,const rect *p_r){
    p_mid->row=(p_r->pt1.row+p_r->pt2.row)/2;
    p_mid->col=(p_r->pt1.col+p_r->pt2.col)/2;
    return p_mid;
}
int main(){
    pt pt1={0};
    rect r={0};
    printf("输入两个点坐标：");
    scanf("%d%d%d%d",&(r.pt1.row),&(r.pt1.col),&(r.pt2.row),&(r.pt2.col));
    pt *p_pt=mid(&pt1,&r);
    printf("中点坐标（%d，%d）\n",p_pt->row,p_pt->col);
    return 0;
}
