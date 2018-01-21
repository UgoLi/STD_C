/*************************************************************************
	> File Name: 07point.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月19日 星期一 13时57分57秒
 ************************************************************************/
//函数指针演示
#include<stdio.h>
void print(const int *p_arr,int size){
    int num=0;
    for (num=0;num<=size-1;num++){
        printf("%d ",*(p_arr+num));
    }
    printf("\n");
}

void print_cb(int *p_arr){
    printf("%d ",*p_arr);
}

void for_each(int *p_arr/*不加const关键字，因为第三个形参未知，会限制其作用*/,int size,void (*p_fun)(int *)/*回调函数*/){
    int num=0;
    // void (*p_fun)(int *)=print_cb;  变为形式参数
    for(num=0;num<=size-1;num++){
        p_fun(p_arr+num);
    }
}
int main(){
    
    
    int arr[]={1,2,3,4,5};
    print(arr,5);
    for_each(arr,5,print_cb);    // 第三个形参灵活调用处理函数
    printf("\n");
    return 0;
}
