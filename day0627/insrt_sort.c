/*************************************************************************
	> File Name: insrt_sort.c
	> Author: 
	> Mail: 
	> Goals: 
	> Created Time: 2017年06月27日 星期二 10时32分17秒
 ************************************************************************/

#include<stdio.h>
void insert_sort(int *p_num,int size){
    int num=0,num1=0,tmp=0;
    for(num=1;num<=size-1;num++){
        //每次循环把下标为num的内容插入到前面的合适内容上
        for(num1=num-1;num1>=0;num1--){
            //每次循环下标num1和num1+1的内容做对比，按顺序交换
            if(*(p_num+num1)>*(p_num+num1+1)){
                tmp=*(p_num+num1);
                *(p_num+num1)=*(p_num+num1+1);
                *(p_num+num1+1)=tmp;
            }
            else{
                break;
            }
        }
    }
}
int main(){
    int arr[]={31,23,45,63,18,3,14};
    int num=0;
    insert_sort(arr,7);
    for(num=0;num<=6;num++){
        printf("%d ",arr[num]);
    }
    printf("\n");
    return 0;
}
