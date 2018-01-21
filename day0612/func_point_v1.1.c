/*
 * func_ptr.c
 */
#include<stdio.h>
int pf(int a){
    return a;
}
int main(){
    printf("%d\n",(*pf)(10));
    return 0;
}
