/*************************************************************************
	> File Name: 10file.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月20日 星期二 18时16分37秒
 ************************************************************************/
/*
 *文本赋值，往一个文本中读写值。文本保存个人信息，可持续增加
 *通过结构体、函数、动态内存和指针操作
 */
#include<stdio.h>
#include<stdlib.h>
typedef struct{
    char name[20];
    char id[10];
    int years;
}person;
person *add_info(person *p_buf)
{
    char check=0;
    do{
        printf("请输入学员信息--name：");
        fgets(p_buf->name,20,stdin);
        if(strlen(p_buf->name)==20&&p_buf->name[19]!='\n'){
            scanf("%*[^\n]");scanf("%*c");
        }
        printf("请输入学员信息--id：");
        fgets(p_buf->id,10,stdin);
        if(strlen(p_buf->name)==20&&p_buf->name[19]!='\n'){
            scanf("%*[^\n]");scanf("%*c");
        }
        printf("请输入学员信息--years：");
        scanf("%d",&p_buf->years);
        scanf("%*[^\n]");scanf("%*c");
        printf("请核对输入信息：\n(name)%s(id)%s(years)%d\n是否正确？(y/n):",p_buf->name,p_buf->id,p_buf->years);
        scanf("%c",&check);
        scanf("%*[^\n]");scanf("%*c");
        if(check!='y'&&check!='Y'){
            printf("请重新输入正确信息！\n");
        }
        else{
            printf("输入成功！\n");
        }

    }while(check!='y'&&check!='Y');
    return p_buf;
}
void infoTofile(void(*p_type)(void *))
{
    
    FILE *p_file=fopen("info.bin","a");   
    if(p_file){
        fwrite(p_type,sizeof(*p_type),1,p_file);
        fclose(p_file);
        p_file=NULL;
    }
}
int main(){
    while(1){
        person prn={0}; 
        infoTofile(add_info(&prn)); 
        char check1=0;
        printf("是否继续输入(y/n):");
        scanf("%c",&check1);
        scanf("%*[^\n]");scanf("%*c");
        if(check1!='y'&&check1!='Y'){
            break;
        }    
    }
    return 0;
}
