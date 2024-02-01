#include <stdio.h>
#include <stdint.h>

struct infor
{
    /* data */
    char name[32];
    char mssv[8];
    uint8_t course_c;
    
};

void infor_input(struct infor * stu_infor);
void infor_print(struct infor * stu_infor);


int main(void)
{
    struct infor stud1;
    infor_input(&stud1);
    infor_print(&stud1);

    return 0;
}

void infor_input(struct infor * stu_infor)
{
    printf("Nhap ten va ho: ");
    scanf("%s", stu_infor->name);
    printf("Nhap mssv: ");
    scanf("%s", stu_infor->mssv);
    printf("Nhap so thu tu khoa C: ");
    scanf("%d", &stu_infor->course_c);
}
void infor_print(struct infor * stu_infor)
{
    printf("Ten va ho: %s\n", stu_infor->name);
    printf("MSSV: %s\n", stu_infor->mssv);
    printf("So thu tu khoa C: %d\n", stu_infor->course_c);
}
//
