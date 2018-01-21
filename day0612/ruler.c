/*
 * ruler.c
 */
#include<stdio.h>
#include<time.h>
int len=66;
int divs=6;
void subdivide(char ar[],int low,int high,int level){
    if (level==0){
        return;
    }
    int mid=(high+low)/2;
    ar[mid]='|';
    subdivide(ar,low,mid,level-1);
    //subdivide(ar,mid,low,level-1);
    subdivide(ar,mid,high,level-1);
}
int main(){
    char ruler[len];
    int i,j,k;
    for(i=1;i<len-2;i++){
        ruler[i]=' ';
    }
    ruler[len-1]=' ';
    int max=len-2;
    int min=0;
    ruler[min]=ruler[max]='|';
    //
    for(i=0;i<=len-1;i++){
        printf("%c",ruler[i]);
    }
    printf("\n");
    //
    for(i=1;i<=divs;i++){
        subdivide(ruler,min,max,i); 
        for(j=0;j<=len-1;j++){
            printf("%c",ruler[j]);
        }
        printf("\n");
        for(k=1;k<len-2;k++){
            ruler[k]=' ';     //reset
        }
    }
    return 0;
}
