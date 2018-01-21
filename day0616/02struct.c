/*
 *声明一个结构体，这个结构体类型的变量可以记录屏幕上一个点的位置
 *声明一个结构体，这个结构体类型的变量可以记录屏幕上一个水平长方体位置
 *编写程序从键盘得到水平长方形位置，然后在屏幕上显示出来
 */
#include<stdio.h>
typedef struct{
    int row,col;
}pt;
typedef struct{
    pt pt1;
    pt pt2;
    pt *p_pt1;
    pt *p_pt2;
}rect;

int main(){
    //pt pt1,pt2;
    rect r={0};rect* p_r=&r;rect** pp_r=&p_r;
    printf("请输入pt1，pt2坐标：");
    scanf("%d",&(pp_r->p_pt1->row)/*,((*p_r).p_pt1->col),&((*p_r)->pt2.row),&(*p_r->pt2.col)*/);
    printf("%d\n",pp_r->p_pt1->row);
    /* printf("长方形位置为：(pt1(%d,%d),pt2(%d,%d))\n",p_r->pt1.row,p_r->pt1.col,p_r->pt2.row,p_r->pt2.col);
    int area=(p_r->pt1.row-p_r->pt2.row)*(p_r->pt1.col-p_r->pt2.col);
    printf("长方形面积为：%d\n",area>=0?area:0-area);
    printf("中间点位置（%d,%d）\n",(p_r->pt1.row+p_r->pt2.row)/2,(p_r->pt1.col+p_r->pt2.col)/2);
    */
    return 0;
}
