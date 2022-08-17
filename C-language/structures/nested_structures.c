#include<stdio.h>
struct student {
    char name[30];
    int age;
    struct DOB {
        int DD;
        int MM;
        int YY;
    }DOB;
};
int main() {
    struct student R;
    printf("enter student name:\n");
    scanf("%s", &R.name);
    printf("enter student age:\n");
    scanf("%d", &R.age);
    printf("enter student DOB:\n");
    scanf("%d%d%d", &R.DOB.DD, &R.DOB.MM, &R.DOB.YY);
    printf("\n");
    printf("\n");
    printf(" name:%s\n", R.name);
    printf("age:%d\n", R.age);
    printf("DOB: %d/%d/%d ", R.DOB.DD, R.DOB.MM, R.DOB.YY);
}