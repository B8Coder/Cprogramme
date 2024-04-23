// //
// #include <stdio.h>
// struct employee
// {
//     int ecode;
//     char ename[100];
// };
// void printInfo(struct employee e);
// typedef struct managementcomputer
// {
//     int roll;
//     float gpa;
//     char name[50];
// } mcmp;

// int main()
// {
//     struct employee e1 = {881, "Benzamin"};
//     printInfo(e1);
//     mcmp s1 = {5 ,3.90,"Raju"};
//     printf("Student Information:\n");
//     printf("Student's roll: %d\n", s1.roll);
//     printf("Student's name: %s\n", s1.name);
//     printf("Student's GPA: %.2f\n", s1.gpa);
//     return 0;
// }
// void printInfo(struct employee e)
// {
//     printf("Employee Information:\n");
//     printf("Employee code: %d\n", e.ecode);
//     printf("Employee name: %s\n", e.ename);
// }

// WAP to enter roll,marks and status i.e. fail or pass of 5 students of a class
// #include <stdio.h>
// #include <string.h>
// struct student
// {
//     int roll;
//     float marks;
//     char status[10];
// };
// void printInfo(struct student s);
// int main()
// {
//     struct student s[4];

//     printf("Enter infomation for Oth student:");
//     scanf("\n%d", &s[0].roll);
//     scanf("\n%f", &s[0].marks);
//     scanf("\n%s", s[0].status);

//     printf("Enter infomation for first student:");
//     scanf("\n%d", &s[1].roll);
//     scanf("\n%f", &s[1].marks);
//     scanf("\n%s", s[1].status);

//     printf("Enter infomation for second student:");
//     scanf("\n%d", &s[2].roll);
//     scanf("\n%f", &s[2].marks);
//     scanf("\n%s", s[2].status);

//     printf("Enter infomation for third student:");
//     scanf("\n%d", &s[3].roll);
//     scanf("\n%f", &s[3].marks);
//     scanf("\n%s", s[3].status);

//     printf("Enter infomation for Fourth student:");
//     scanf("\n%d", &s[3].roll);
//     scanf("\n%f", &s[4].marks);
//     scanf("\n%s", s[4].status);

//     printInfo(s[0]);
//     printInfo(s[1]);
//     printInfo(s[2]);
//     printInfo(s[3]);
//     printInfo(s[4]);

//     return 0;
// }
// void printInfo(struct student s)
// {
//     printf("Roll:%d ,Marks:%.2f, Status:%s \n", s.roll, s.marks, s.status);

// };


