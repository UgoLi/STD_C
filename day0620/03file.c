/*************************************************************************
	> File Name: 03file.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月20日 星期二 11时02分10秒
 ************************************************************************/
//fread函数演示

#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[5]={0};
    FILE *p_file=fopen("a.bin","rb");
    if(NULL!=p_file){
        int num=fread(arr,sizeof(int),5,p_file);
        printf("一共得到%d个数\n",num);
        printf("arr[5]={%d,%d,%d,%d,%d}\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
        fclose(p_file);
        p_file=NULL;
    }
    return 0;
}
