/*
 *字符串演示
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    /*
    char *strs[]={"abc","def","ghi","jkl","mno"};
    */
    char strs[][10]={"abc","def","ghi","jkl","mno"};
    int num=0;
    for(num=0;num<=4;num++){
        printf("%s\n",strs[num]);
    }
    return 0;
}
