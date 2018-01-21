/*************************************************************************
	> File Name: 06quik_sort.c
	> Author: 
	> Mail:24,31,45,63,18,3,14.快速排序 
	> Created Time: 2017年06月27日 星期二 14时04分45秒
 ************************************************************************/

#include<stdio.h>
void quik_sort(int *p_num,int size){
    int base=*p_num;
    int *p_start=p_num,*p_end=p_num+size-1,tmp=0;
    if(1>=size){
        return;
    }
    while(p_start<p_end){
        //每次循环把基准数字和另外一个数字进行调整
        if(*p_start>*p_end){
            tmp=*p_end;
            *p_end=*p_start;
            *p_start=tmp;
        }
        if(*p_start==base){
            //p_start指针捆绑的存储区里是基准数字
            p_end--;
        }
        else{
            //p_end指针里捆绑的存储区里是基准数字
            p_start++;
        }
    }
    //把基准数字左边数字排列好
    quik_sort(p_num,p_start-p_num);
    //把基准数字右边数字排列好
    quik_sort(p_start+1,size-(p_start-p_num)-1);

    
}
int main(){
    int arr[]={25,27,18,33,45,9,14};
    int num=0;
    quik_sort(arr,7);
    for(num=0;num<=6;num++){
        printf("%d ",arr[num]);
    }
    printf("\n");
    return 0;
}
