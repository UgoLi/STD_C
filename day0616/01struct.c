/*
 *结构体演示
 */
#include<stdio.h>
#include<string.h>
/*struct person{
    int age;
    float height;
    char name[10];
};
typedef struct person sperson;*/
typedef struct /*person*/{
    int age;
    float height;
    char name[20];
}sperson;
int main(){
    sperson prsn={0};   //结构体变量声明
    sperson prsn1={0};
    sperson *p_person=NULL;   //结构体指针
    printf("请输入年龄：");
        scanf("%d",&(prsn.age));
    printf("请输入身高：");
        scanf("%g",&prsn.height);
        scanf("%*[^\n]");
        scanf("%*c");           //此处用户输入身高后有\n,需要清除
    printf("请输入姓名：");
    fgets(prsn.name,20,stdin);
    if(strlen(prsn.name)==20&&prsn.name[19]!='\n'){
        scanf("%*[^\n]");
        scanf("%*c");
    }
    printf("age %d\nheight %g\nname %s\n",prsn.age,prsn.height,prsn.name);
    prsn1=prsn;
    printf("age %d\nheight %g\nname %s\n",prsn.age,prsn.height,prsn.name);
    p_person=&prsn;
    printf("age %d\nheight %g\nname %s\n",p_person->age,p_person->height,p_person->name);
    return 0;
}
