/*************************************************************************
	> File Name: test.c
	> Author:UgoLi 
	> Mail: 2653920896@qq.com
	> Created Time: 2017年07月25日 星期二 20时41分03秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 6 
void doit(void){
    perror("");
    getchar();
}
int main(){
    int b=14;
    int a[SIZE]={1,3,4,6,8};
    int i,j;
    for(i=0;i<SIZE-1;i++){
        if(b>a[i]&&b<a[i+1]||(i==0&&b<=a[i])||(i==SIZE-2&&b>=a[i])){
            for(j=SIZE-2;j>=i;j--){
                a[j+1]=a[j];
            }
            if(i==0&&b<=a[i])
                a[i]=b;
            else
                a[i+1]=b;
        }
    }
    perror("");
    for(i=0;i<SIZE;i++)
    printf("%d ",a[i]);
    printf("\n");
    atexit(doit);
    getchar(); 
    return 0;
}
