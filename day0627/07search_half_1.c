/*************************************************************************
	> File Name: 07search_half_1.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月27日 星期二 16时09分58秒
 ************************************************************************/
//折半查找法——递归实现

#include<stdio.h>
int *search_half(const int *p_start,const int *p_end,int num){
    const int *p_start1=p_start;
    const int *p_end1 =p_end;
    const int *p_mid=NULL;
    p_mid=p_start1+(p_end1-p_start1)/2;
    if(p_start1>p_end1){
        return NULL;
    }
    if(*p_mid==num){
        return (int *)p_mid;
    }
    else if(*p_mid>num){
        p_end1=p_end-1;
    }
    else {
        p_start1=p_mid+1;
    }
    return  search_half(p_start1,p_end1,num);

}
int main(){
    
    int *p_num=NULL;
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    printf("input number:");
    int num=0;
    scanf("%d",&num);
    p_num=search_half(arr,arr+9,num);
    if(p_num){
        printf("找到：%p  %d\n",p_num,*p_num);
    }
    else{
        printf("没有找到！\n");
    }
    return 0;
}
