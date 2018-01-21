/*
 *主函数参数演示
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
    int num=0;
    for(num=0;num<=argc-1;num++){
        printf("%s\n",argv[num]);
    }
    return 0;
}
