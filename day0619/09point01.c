/*************************************************************************
	> File Name: 09point01.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月19日 星期一 15时33分31秒
 ************************************************************************/
//动态分配内存
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p_num=(int *)malloc(5*sizeof(int ));
    if(p_num){
        int num=0;
        for(num=0;num<=4;num++){
            *(p_num+num)=rand()%36+1;
        }
        for(num=0;num<=4;num++){
            printf("%d ",*(p_num+num));
        }
        printf("\n");
        free(p_num);
        p_num=NULL;
    }
    return 0;
}
