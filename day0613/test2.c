/*
 *
 */
#include<stdio.h>
int main(){
    int tell[5];
    int (*pas)[5]=&tell;
    printf("pas[0]的地址%p,&tell的地址%p\n",&(*pas)[0],&tell);
    return 0;
}
