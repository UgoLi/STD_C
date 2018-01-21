/*************************************************************************
	> File Name: 09file.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月20日 星期二 16时16分15秒
 ************************************************************************/
//从info文件拿出所有的人的id

#include<stdio.h>
typedef struct{
    int id;
    float salary;
    char name[10];
}person;
int main(){
    FILE *p_file=fopen("info.bin","rb");
    if(p_file){
        fseek(p_file,0,SEEK_SET);
        while(1){
            int num=0;
            fread(&num,sizeof(int),1,p_file);
            fseek(p_file,sizeof(person)-sizeof(int),SEEK_CUR);
            if(!num){
                break;
            }
            printf("id：%d \n",num);
        }
        fclose(p_file);
        p_file=NULL;
    }
    return 0;
}
