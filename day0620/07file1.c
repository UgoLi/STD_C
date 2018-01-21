/*************************************************************************
	> File Name: 07file1.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月20日 星期二 15时11分07秒
 ************************************************************************/

#include<stdio.h>
typedef struct{
    int id;
    float salary;
    char name[10];
}person;
int main(){
    FILE *p_file=fopen("info.bin","rb");
    person prn={0};
    if(p_file){
        while(1){
            int size=fread(&prn,sizeof(prn),1,p_file);
            if(!size){
                break;
            }
            printf("id:%d,salary:%g,name:%s",prn.id,prn.salary,prn.name);
        }
    }
}
