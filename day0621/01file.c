/*************************************************************************
	> File Name: 01file.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月21日 星期三 09时10分54秒
 ************************************************************************/
//cp 路径1 路径2

#include<stdio.h>

int main(int argc,char **argv){
    if (argc <3){
        printf("命令错误！\n");
        return 0;
    }
    int buf[25]={0};    //每次复制的字节数
    int size=0;           //每次实际复制的字节数
    FILE  *p_src=NULL,*p_dest=NULL;
    p_src=fopen(*(argv+1),"rb");
    if(!p_src){
        printf("原始文件打开失败\n");
        return 0;
    }
    p_dest=fopen(*(argv+2),"wb");
    if(!p_dest){
        printf("打开目标文件失败\n");
        fclose(p_src);
        p_src=NULL;
        return 0;
    }
    while(1){
        size=fread(buf,sizeof(int),25,p_src);
        if(!size){
            break;
        }
        fwrite(buf,sizeof(int),size,p_dest);
    }
    fclose(p_dest);
    p_dest=NULL;
    fclose(p_src);
    p_src=NULL;   //

    return 0;
}
