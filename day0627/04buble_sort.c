/*************************************************************************
	> File Name: 04buble_sort.c
	> Author: 
	> Mail: 
 ************************************************************************/

#include<stdio.h>
void bubble_sort(int *p_num,int size){
    int num=0,num1=0,tmp=0;
    for(num=0;num<=size-1;num++){
        for(num1=size-1;num1>=1+num;num1--){
            if(*(p_num+num1-1)>*(p_num+num1)){
                tmp=*(p_num+num1);
                *(p_num+num1)=*(p_num+num1-1);
                *(p_num+num1-1)=tmp;
            }
        }
    }
}
int main(){
    int arr[]={31,23,45,63,18,3,14};
    int num=0;
    bubble_sort(arr,7);
    for(num=0;num<=6;num++){
        printf("%d ",arr[num]);
    }
    printf("\n");
    return 0;
}
