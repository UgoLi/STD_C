/*************************************************************************
	> File Name: 02file.c
	> Author:UgoLi 
	> Mail: 
	> Created Time: 2017年06月20日 星期二 10时34分36秒
 ************************************************************************/
//文件操作演示 二进制

#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int size=0;
    FILE *p_file=fopen("a.bin","wb");
    if(p_file){
        size=fwrite(arr,sizeof(int),5,p_file);
        printf("一共写入了%d个整数类型存储区\n",size);
        fclose(p_file);
        p_file=NULL;
    }
    return 0;
}
