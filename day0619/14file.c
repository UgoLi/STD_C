/*************************************************************************
	> File Name: 14file.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月19日 星期一 20时09分37秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp=NULL;
    fp=fopen("file.txt","w");
    if(NULL==fp){
        return 0;
    }
    int a=1234;
    double b=213.4568;
    char str[20]="Have good day!";
    
    //fwrite(&a,sizeof(int),1,fp);  
    //fwrite(&b,sizeof(double),1,fp);
    int len=strlen(str)+1;
    //fwrite(&len,sizeof(int),1,fp);
    fwrite(str,sizeof(char),len,fp);
    
    fclose(fp);
    fp=NULL;

    return 0;
}
