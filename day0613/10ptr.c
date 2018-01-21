/*
 *编写函数从一个数组里找到最大数字所在的存储区并把这个存储区传递给调用函数
 */
#include<stdio.h>
int * max(const int *,int); 
int main(){
    int a[]={1,2,20,4,5};
    int *p_a=&a[0];
    int *p_num=max(p_a,5);
    printf("%d\n",*p_num);
    /*
    int *p_num=max(a,5);
    printf("%d\n",*p_num);
    */
    return 0;
}
int * max(const int *arr,int size){
    const int *tmp=NULL,*p_max=NULL;
    for(tmp=arr;tmp<=arr+size-1;tmp++){
        if(!p_max||*p_max<*tmp){
            //用新存储区替换以前的存储区
            p_max=tmp;
        }
        printf("当前运行地址：%p\n",tmp);
    }
    return  (int *) p_max;
}
