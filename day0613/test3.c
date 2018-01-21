/*
 *
 */
#include<stdio.h>
#include<string.h>
int main(){
    char animal[20]="bear";
    const char * bird="wren";
    char *ps;
    printf("%s and %s\n",animal,bird);
    printf("Enter a kind of animal:");
    scanf("%s",&animal);
    ps=animal;
    printf("%s!\n",animal);
    printf("Before using strcpy():\n");
    printf("%s at %p\n",animal,animal);
    printf("%s at %p\n",ps,ps);
    printf("after using strcpy():\n");
    char sp[20];
    strcpy(sp,animal);
    printf("%s at %p\n",animal,animal);
    printf("%s at %p\n",sp+1,sp+1);
    return 0;
}
