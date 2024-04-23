/*WAP program to ask the information of ny 12 students with roll number, name and
marks scored in sub1,sub3 and sub3.Also, display them in proper format with the calculationof total
and percentage.[Fullmarks of the subject is 100]
*/
// #include <stdio.h>
// #include <string.h>
// struct students
// {
//     int roll;
//     char name[100];
//     int s1, s2, s3;
//     float totalmarks;
//     float percentage;
// };
// void printinfo(struct students s);

// int main()
// {
//     struct students s[12];
//     for (int i = 0; i < 2; i++)
//     {
//         printf("Enter the name and roll of Student %d:", i + 1);
//         scanf("\n%s %d", s[i].name, &s[i].roll);
//         printf("Enter the marks of subject 1 of std  %d:", i + 1);
//         scanf("\n%d", &s[i].s1);
//         printf("Enter the marks of subject 2 of std  %d:", i + 1);
//         scanf("\n%d", &s[i].s2);
//         printf("Enter the marks of subject 3 of std  %d:", i + 1);
//         scanf("\n%d", &s[i].s3);
//         s[i].totalmarks=s[i].s1+s[i].s1+s[i].s1;
//         s[i].percentage=(s[i].totalmarks/300)*100;

//     }
//     printf("Name\t roll\t tmarks\tpercent\n");
//     for (int i = 0; i < 2; i++)
//     {

//         printf("%s\t%d\t%.2f\t%.2f", s[i].name, s[i].roll, s[i].totalmarks, s[i].percentage);
//         printf("\n");
//     }

//     return 0;
// }
/*
WAP to input staff id,name and the salary of 50 staffs.Display staff id,name and salaryof those staff whose salary 
range from 25k to 40k using structures.
*/
// #include<stdio.h>
// #include<string.h>
// struct staffs{
//     int id,sal;
//     char name[50];
// };
// int main(){
//     struct staffs st[50];
//     int i ;
//     for(i=0;i<50;i++){
//         printf("Enter the staff id ,name and salary of staff %d: ",i+1);
//         scanf("%d %s %d",&st[i].id,st[i].name,&st[i].sal);

//     }   
//     printf("\n***Information of staff whose salary range from 25k-40k:***\n ");
//     printf("Id\tName\tSalary\n");
//     for ( i = 0; i < 50; i++)
//     {
//         if (st[i].sal>=25000&&st[i].sal<=40000)
//         {
//             printf("%d\t%s\t%d\n",st[i].id,st[i].name,st[i].sal);
//         }
        
//     }
    
//     return 0;
// }


//WAP to read the marks of five students in a subject and count how many are failed or pass. 
#include<stdio.h>

int main(){
    
    
    return 0;
}