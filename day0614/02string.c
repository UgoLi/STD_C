/*
 *字符串演示
 */
#include<stdio.h>
#include<string.h>
int main(){
    char ch=0;
    int num=0;
    float fnum=0.0f;
    char str[10]={0};
    printf("%d %c %g\n",34,'p',5.4f);
    sprintf(str,"%d %c %g",34,'p',5.4f);  //转换成字符存储到字符数组
    printf("%s\n",str);
    //scanf("%c%d%g",&ch,&num,&fnum);
    sscanf("e 56 4.2","%c%d%g",&ch,&num,&fnum);
    printf("%c %d %g\n",ch,num,fnum);
    return 0;
}
