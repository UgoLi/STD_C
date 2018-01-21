/*************************************************************************
	> File Name: 01file.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月20日 星期二 09时27分10秒
 ************************************************************************/
//文件操作演示

#include<stdio.h>
int main(){
    FILE *p_file=NULL;             //结构体指针定义，记录fopen函数返回值
    p_file=fopen("file.txt","w");  //文件指针，代表打开的文件
    /*打开成功
    if(NULL==p_file){
        //操作文件
    }
    fclose(p_file);                //操作文件完关闭文件
    p_file=NULL;                   //避免野指针，赋值空指针
    */
    /*打开失败*/
    if(NULL!=p_file){
        return -1;
    }
    //操作文件
    fclose(p_file);
    p_file=NULL;
    return 0;
}
