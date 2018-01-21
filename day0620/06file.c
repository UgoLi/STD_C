/*************************************************************************
	> File Name: 06file.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月20日 星期二 13时58分08秒
 ************************************************************************/
//多个人员信息，每个包括 整形ID，单精度浮点工资和姓名
//把信息记录到二进制文件里

#include<stdio.h>
typedef struct{
    int id;
    float salary;
    char name[10];
}person;
int main(){

    while(1){    
    FILE *p_info=fopen("info.bin","a");
    if(p_info){
            person prs={0};
            printf("请输入人员信息1、id 2、salary 3、name :\n");
            scanf("%d",&prs.id);
            scanf("%g",&(prs.salary));
            scanf("%*[^\n]");
            scanf("%*c");
            fgets(prs.name,10,stdin);
            fwrite(&prs,sizeof(prs),1,p_info);
            //fprintf(p_info,"%d%g%s",prs.id,prs.salary,prs.name);
            char ch;
            printf("是否继续输入(y/n):");
            scanf("%c",&ch);
            if(ch!='y'&&ch!='Y')
                break;
        fclose(p_info);
        p_info=NULL;
        }
    }
    return 0;
}

