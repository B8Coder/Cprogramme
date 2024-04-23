//
#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int roll;
    float gpa;
};

int main()
{
    // Initializing structures:

    // 1. single by single
    struct student s2;
    strcpy(s2.name, "Babu");
    s2.roll = 8;
    s2.gpa = 3.98;
    printf("Student name: %s\n", s2.name);
    printf("Student  roll no.: %d\n", s2.roll);
    printf("Student's gpa:%.2f\n", s2.gpa);

    struct student s23;
    s23.roll = 9;
    s23.gpa = 2.69;
    strcpy(s23.name, "Ram");
    printf("Student name: %s\n", s23.name);
    printf("Student  roll no.: %d\n", s23.roll);
    printf("Student's gpa:%.2f\n", s23.gpa);

    struct student mgt[50]; // mgt= management
    mgt[0].roll = 98;
    mgt[0].gpa = 3.33;
    strcpy(mgt[0].name, "john");
    printf("name=%s  roll=%d   gpa=%.2f", mgt[0].name, mgt[0].roll, mgt[0].gpa);

    // 1. In a single line
    struct student s1 = {"Blenden", 8, 3.98};
    
    printf("\nStudent's name: %s", s1.name);

    // Structures with pointers
    struct student *ptr = &s1;
    strcpy(ptr->name,"Karan");
    printf("\nStudent.roll with pointer:%d", (*ptr).roll);
    printf("\nstudent->roll:%d", ptr->roll);
    printf("\nstudent->gpa:%f", ptr->gpa);
    printf("\nstudent->name:%s", ptr->name);

    return 0;
}