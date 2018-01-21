/*
 *编写模拟登陆练习
 *程序要求用户输入用户名和密码
 *如果用户名是admin密码是123456就是正确的
 *共有三次机会，最后要给出提示
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char name[20]={0},password[20]={0};
    int times=0;
    do {
        printf("请输入用户姓名：");
        fgets(name,20,stdin);
        if(strlen(name)==20&&name[19]!='\n'){
            scanf("%*[^\n]");
            scanf("%*c");
        }
        printf("请输入用户密码：");
        fgets(password,20,stdin);
        if(strlen(password)==20&&password[19]!='\n'){
            scanf("%*[^\n]");
            scanf("%*c");
        }
        if(!strcmp(name,"admin\n")&&!strcmp(password,"123456\n")){
            //printf("登陆成功！\n");
            break;
        }
        if(strcmp(name,"admin\n"))
            printf("用户名错误！请重新登陆！\n");
        else if(strcmp(password,"123456\n")) 
            printf("密码错误！请重新登陆！\n");
        times++;
    }while(times<3);
    if(times==3){
        printf("输入超过3次，请稍后再试！\n");
    }
    else if(times<3)
    printf("登陆成功！\n");
    return 0;
}
