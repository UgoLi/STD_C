/*
 *编写函数从两个圆里找到面积比较大的圆，并把它传递回调用函数
 */
#include<stdio.h>
typedef struct{
    int row,col;
}pt;
typedef struct{
    pt pt1;
    float r;
}cir;
cir *Maxarea(const cir *p_cir1,const cir *p_cir2){
   if((p_cir1->r)>=(p_cir2->r)){
        return (cir *)p_cir1;
   }
   else{
        return (cir *)p_cir2;
   }
}
int main(){
    cir *p_cir=NULL;
    cir cir1={0},cir2={0};
    printf("请输入两个圆的圆心及半径：");
    scanf("%d%d%g%d%d%g",&(cir1.pt1.row),&(cir1.pt1.col),&(cir1.r),&(cir2.pt1.row),&(cir2.pt1.col),&(cir2.r));
    p_cir=Maxarea(&cir1,&cir2);
    printf("面积较大的圆：（%d，%d）,r=%g\n",p_cir->pt1.row,p_cir->pt1.col,p_cir->r);
    return 0;
}
