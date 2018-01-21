//文本输入输出
#include<stdio.h>
#include<stdlib.h>
void Calculator()
{
    int a,b,c;
    char x,y;
    FILE *fp1,*fp2;
    fp1=fopen("expres.txt","r");
    fp2=fopen("result.txt","w");
    printf("Please input\n");
    fscanf(fp1,"%d%d%d",&a,&x,&b);
    fprintf(fp1,"%d%c%d\n",a,x,b);
    switch(x){
        case '+':
            c=a+b;
            printf("%d%c%d=%d\n",a,x,b,c);
            fprintf(fp2,"%d%c%d=%d\n",a,x,b,c);
            break;
        case '-':
            c=a-b;
            printf("%d%c%d=%d\n",a,x,b,c);
            fprintf(fp2,"%d%c%d=%d\n",a,x,b,c);
            break;
        case '*':
            c=a*b;
            printf("%d%c%d=%d\n",a,x,b,c);
            fprintf(fp2,"%d%c%d=%d\n",a,x,b,c);
            break;
        case '/':
            c=a/b;
            printf("%d%c%d=%d\n",a,x,b,c);
            fprintffp2("%d%c%d=%d\n",a,x,b,c);
            break;
        default:
            printf("Input Error!\n");
            break;
    }
}
int main()
{
    Calculator();
    return 0;
}
