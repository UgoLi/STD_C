/*************************************************************************
	> File Name: 08point.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月19日 星期一 14时32分27秒
 ************************************************************************/

#include<stdio.h>
void neg_cb(int *p_arr){
    *p_arr=0-*p_arr;
}

void print(const int *p_arr,int size){
    int num=0;
    for(num=0;num<=size-1;num++){
        printf("%d ",*(p_arr+num));
    }
    printf("\n");
}

void print_cb(const int *p_arr){
    printf("%d ",*p_arr);
}

void for_each(int *p_arr,int size,void(* p_fun)(int*)){
    int num=0;
    for(num=0;num<=size-1;num++){
        p_fun(p_arr+num);
    }
    printf("\n");
}
int main(){
    int arr[]={1,2,3,4,5};
    print(arr,5);
    for_each(arr,5,print_cb);
    for_each(arr,5,neg_cb);
    for_each(arr,5,print_cb);
    return 0;
}
