/*************************************************************************
	> File Name: 08file.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月20日 星期二 15时27分21秒
 ************************************************************************/
//位置指针

#include<stdio.h>
int main(){
    char ch=0;
    FILE *p_fiel=fopen("xyz.txt","rb");
    if(p_fiel){
        //rewind(p_fiel);
        fseek(p_fiel,2,SEEK_SET);
        printf("位置指针是%ld\n",ftell(p_fiel));
        fread(&ch,sizeof(char),1,p_fiel);
        printf("ch是%c\n",ch);

        //rewind(p_fiel);
        fseek(p_fiel,4,SEEK_CUR);
        printf("位置指针是%ld\n",ftell(p_fiel));
        fread(&ch,sizeof(char),1,p_fiel);
        printf("ch是%c\n",ch);
        
        //rewind(p_fiel);
        fseek(p_fiel,-3,SEEK_END);
        printf("位置指针是%ld\n",ftell(p_fiel));
        fread(&ch,sizeof(char),1,p_fiel);
        printf("ch是%c\n",ch);
        
        fclose(p_fiel);
        p_fiel=NULL;
    }
    return 0;
}
