/*************************************************************************
	> File Name: 13file.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月19日 星期一 19时21分47秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=NULL;
    /*******************分割线******************/
    fp=fopen("file.c","w");
    if(NULL==fp){
        return -1;
    }
    int a=123;
    float b=2.5;
    double c=123.13241;
    char d='h';
    char e[]="fightting";
    char *str[]={"ab","cd","ef","hi","jk"};
    fprintf(fp,"%d %g %lg %c %s %s",a,b,c,d,e,*(str+1));
    fclose(fp);
    fp=NULL;
    /*******************分割线******************/
    fp=fopen("file.c","r");
    if(NULL==fp){
        return 0;
    }
    int a1;
    float b1;
    double c1;
    char d1;
    char d2;
    char *e1=&d2;
    fscanf(fp,"%d %g%lg%c%s\n",&a1,&b1,&c1,&d1,&d2);      // a1,b1最终输出错误
    printf("%d %g %lg %c %s %p\n",a1,b1,c1,d1,e1,&e1);
    return 0;
}
