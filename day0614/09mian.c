/*
 *鸡兔同笼问题
 *要求从命令中获取头和脚的个数
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
    if(argc<3){
        printf("命令错误！\n");
        return 0;
    }
    int head=atoi(argv[1]);
    int legs=atoi(argv[2]);
    printf("头 %d，脚 %d\n",head,legs);
    int num=0;
    for(num=0;num<=head-1;num++){
        if(num*2+(head-num)*4==legs){
            break;
        }
    }
    if(num==head&&num*2+(head-num)*4!=legs){
        printf("没有合适的组合！\n");
    }
    else
        printf("鸡 %d 只，兔 %d 只\n",num,head-num);
    return 0;
}
