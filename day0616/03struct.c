/*
 *结构体演示
 */
#include<stdio.h>
typedef struct{
    int row,col;
}pt;
void print(const pt *p_pt){
    printf("(%d,%d)\n",p_pt->row,p_pt->col);
}
int main(){
    pt pt1={0};
    printf("请输入一个点的位置：");
    scanf("%d%d",&(pt1.row),&(pt1.col));
    print(&pt1);
    return 0;
}
