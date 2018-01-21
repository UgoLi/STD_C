/*
 * func_point.c
 */
#include<stdio.h>
double betsy(int);
double pam(int);
void estimate(int lines,double (*pf)(int));
int main(){
    int code;
    printf("How many lines of code do you need?");
    scanf("%d",&code);
    printf("Here's Betsy's estimate:\n");
    estimate(code,betsy);
    printf("Here's Pam's estiamte:\n");
    estimate(code,pam);
    return 0;
}
double betsy(int lns){
    return 0.05*lns;
}
double pam(int lns){
    return 0.03*lns+0.0004*lns*lns;
}
void estimate(int lines,double (*pf)(int)){
    printf("%d lines will take %f hour(s)\n",lines,(*pf)(lines));
}
