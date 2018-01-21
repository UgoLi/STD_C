/*************************************************************************
	> File Name: 05file.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月20日 星期二 11时38分00秒
 ************************************************************************/
//文本文件演示  fscanf函数

#include<stdio.h>
int main(){
    int arr[5]={0},num=0;
    FILE *p_file=fopen("abc.txt","r");
    if(p_file){
        for(num=0;num<=4;num++){
            fscanf(p_file,"%d",&arr[num]);
        }
        for(num=0;num<=4;num++){
            printf("%d ",arr[num]);
        }
        printf("\n");
        fclose(p_file);
        p_file=NULL;
    }
    return 0;
}
