/*************************************************************************
	> File Name: 07file.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月20日 星期二 14时54分26秒
 ************************************************************************/
//将info.bin中的信息都显示在屏幕上

#include<stdio.h>
#include<string.h>
int main(){
    int id;
    float salary;
    char name[10];
    FILE *p_info=fopen("info.bin","rb");
    if(p_info){
        while(1){        
            int num=fread(&id,sizeof(int),1,p_info);
            if(!num)
                break;
            printf("%d",id);
            num=fread(&salary,sizeof(float),1,p_info);
            printf("%g",salary);
            num=fread(name,sizeof(char),strlen(name)+1,p_info);
            printf("%s\n",name);
        }
        fclose(p_info);
        p_info=NULL;
    }
    return 0;
}
