/*************************************************************************
	> File Name: 12file.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月19日 星期一 17时56分35秒
 ************************************************************************/

#include<stdio.h>
int main(void){
    FILE *fp=NULL;
    /*****************************分割线***********************/
    fp=fopen("file.c","w");
    if (NULL==fp){
        return -1;
    }
    fclose(fp);
    fp==NULL;
    /*****************************分割线***********************/
    fp=fopen("file.c","a");
    if(NULL==fp){
        return -1;
    }
    fclose(fp);
    fp=NULL;
    /*****************************分割线***********************/
    fp=fopen("file.c","r");
    if(NULL==fp){
        return -1;
    }
    fclose(fp);
    fp=NULL;

    return 0;
}
