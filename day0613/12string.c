/*
 *编写函数把一个数组所有存储区的内容前后颠倒
 *用指针编写
 */
#include<stdio.h>
void change(int *arr,int size){
    int *p_w=NULL,*p_h=NULL;
    for(p_w=arr,p_h=arr+size-1;p_w<=arr+(size-1)/2;p_w++,p_h--){
        int tmp=0;
        tmp=*p_w;
        *p_w=*p_h;
        *p_h=tmp;
    }
}   
int main(){
    int a[]={1,2,3,4,5,6};
    change(a,6);
    int num=0;
    for(num=0;num<=5;num++){
        printf("%d ",a[num]);
    }
    printf("\n");
    return 0;
}
