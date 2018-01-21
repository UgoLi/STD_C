/*
 *编写函数计算水平长方形面积，把结果传递给调用函数
 */
#include<stdio.h>
typedef struct{
    int row,col;
}pt;
typedef struct{
    pt pt1,pt2;
}rect;
int area(const rect *p_r){
    int area=(p_r->pt1.row-p_r->pt2.row)*(p_r->pt1.col-p_r->pt2.col);
    return area>=0?area:0-area;
}
int main(){
    rect r={0};
    printf("请输入两个点坐标：");
    scanf("%d%d%d%d",&r.pt1.row,&r.pt1.col,&r.pt2.row,&r.pt2.col);
    printf("两点坐标是:(%d,%d),(%d,%d)\n",r.pt1.row,r.pt1.col,r.pt2.row,r.pt2.col);
    printf("面积是：%d\n",area(&r));
    return 0;
}
