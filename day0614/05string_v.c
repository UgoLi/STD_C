/*
 *
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char grade[50]={0},tmp[10]={0};
    int num=0;
    while(1){
        printf("请输入一个考试成绩：");
        scanf("%d",&num);
        if(num<0||num>100){
            break;
        }
        sprintf(tmp,"%d,",num);
        strcat(grade,tmp);
    }
    grade[strlen(grade)-1]=0;
    printf("结果是：\n%s\n",grade);
    return 0;
}
