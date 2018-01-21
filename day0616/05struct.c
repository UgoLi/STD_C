/*
 *结构体演示
 */
#include<stdio.h>
typedef struct{
    int row,col;
}pt;
pt *read(pt *p_pt){
    //pt pt1={0};
    printf("请输入一个点坐标：");
    scanf("%d%d",&(p_pt->row),&(p_pt->col));
    return p_pt;
}
int main(){
    pt pt1={0};
    pt *p_pt=read(&pt1);
    printf("点坐标（%d,%d）\n",p_pt->row,p_pt->col);
    return 0;
}
