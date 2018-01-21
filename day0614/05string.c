/*
 *编写程序从键盘得到多个考试成绩（个数不超过10个）
 *把所有考试成绩按照如下格式合并成一个字符串后显示在屏幕上
 *10，20，30，40，50
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char grade[20]={0};
    printf("请输入考试成绩：\n");
    fgets(grade,20,stdin);
    if(strlen(grade)==20&&grade[19]!='\n'){
        scanf("%*[^\n]'");
        scanf("%*c");
    }
    int num=0;
    for(num=0;num<=19;num++){
        if(grade[num]==' ')
            grade[num]=',';
    }
    printf("%s\n",grade);
    return 0;
}
