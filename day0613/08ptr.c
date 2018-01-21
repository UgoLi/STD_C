/*
 *把连个函数的存储区内容做交换
 */
#include<stdio.h>
void change(int *,int *);
int main(){
    int a=1;
    int b=4;
    change(&a,&b);// 传地址给指针
        printf("%d %d\n",a,b);
    return 0;
}
void change(int *p_arr1,int *p_arr2){
    /*
    int tmp=0;
    int *p_tmp=&tmp;
    // 存储区赋值，存储区所有函数都可以用
    *p_tmp=*p_arr1;
    *p_arr1=*p_arr2;
    *p_arr2=*p_tmp;
    */
    //*错误代码
    // * 指针变量赋值，这里指针变量只在函数中声明，函数结束其生命周期结束，不能改变调用函数变量所对应的地址
    // *
    int *p_tmp=NULL;
    p_tmp=p_arr1;    //p_arr1地址寄存给p_tmp
    p_arr1=p_arr2;   //地址p_arr2给地址p_arr1
    p_arr2=p_tmp;    //寄存地址P_tmp给地址p_arr2
    printf("%d %d\n",*p_arr1,*p_arr2);
    // */
}
