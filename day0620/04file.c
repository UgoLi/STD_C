/*************************************************************************
	> File Name: 04file.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月20日 星期二 11时13分09秒
 ************************************************************************/
//txt 文本操作

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int arr[]={10,20,30,40,50};
    int num=0;
    char buf[10]={0};
    FILE *p_file=fopen("abc.txt","wb");
    if(p_file){
        for(num=0;num<=4;num++){
            /*sprintf(buf,"%d ",arr[num]);
            fwrite(buf,sizeof(char),strlen(buf),p_file);
            */
            fprintf(p_file,"%d ",arr[num]);
        }
        fclose(p_file);
        p_file=NULL;
        
    }
    return 0;
}
