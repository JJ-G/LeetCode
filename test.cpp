#include <stdio.h>
int main(int argc, char **argv)
{
    char name[16] = "";
    unsigned  int  age=0;
    printf("Plaese input your name and age:");
    scanf("%s%d",name,&age);
    printf("you name is:%s,age is:%d\n",name,age);
return 0;
}