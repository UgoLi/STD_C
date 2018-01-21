/*
 *recur.c 
 */
#include<stdio.h>
int main(){
    countdown(4);
    return 0;
}
void countdown(int a){
    printf("Counting down...%d(a at %p)\n",a,&a);
    if (a>0){
        countdown(a-1);
    }
    printf("%d:Kaboom!        (a at %p)\n",a,&a);
    }
