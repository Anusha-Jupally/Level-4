// 1.Structure syntax

#include<stdio.h>

struct stu
{
    int rollno;
    char name[10];
};

int main()
{
    struct stu s = { 1, "Anusha"};
    printf("Roll No : %d\n",s.rollno);
    printf("Name : %s\n",s.name);
    return 0;
}
