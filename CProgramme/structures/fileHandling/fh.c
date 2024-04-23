// Reading five integers from a file.
// #include <stdio.h>
// int main()
// {
//     int num;
//     FILE *fptr;
//     fptr = fopen("test.txt", "r");

//     fscanf(fptr, "%d", &num);
//     printf("%d\t",num);

//     fscanf(fptr, "%d", &num);
//     printf("%d\t",num);

//     fscanf(fptr, "%d", &num);
//     printf("%d\t",num);

//     fscanf(fptr, "%d", &num);
//     printf("%d\t",num);

//     fscanf(fptr, "%d", &num);
//     printf("%d\t",num);

//     fclose(fptr); // closing a file

//     return 0;
// }

// WAP to input student information from a user & enter into a file.
//
#include <stdio.h>
int main()
{
    // int roll;
    // char name[20];
    // float gpa;
    // FILE *fptr;
    // fptr = fopen("studentInfo.txt", "w");
    // printf("Enter name ,roll and gpa:");
    // scanf("%s %d %f", name, &roll, &gpa);
    // fprintf(fptr,"Name\tRoll\tGPA\n");
    // fprintf(fptr,"%s\t\t%d\t\t%.2f\n",name,roll,gpa);
    // fclose(fptr);

    // WAP to write all the odd numbers from 1 to n ina a file.
    // FILE *fptr;
    // fptr = fopen("rec.txt", "w");
    // int n, i;
    // printf("Enter value of n:");
    // scanf("%d", &n);
    // for (i = 1; i <= n; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         fprintf(fptr, "%d ", i);
    //     }
    // }
    // fclose(fptr);
    FILE *file;
    int n, n1, sum = 0;
    file = fopen("num.txt", "r");
    fscanf(file, "%d", &n);
     printf("%d\n", n);
    fscanf(file, "%d", &n1);
    printf("%d\n", n1 );
    
    fclose(file);
    file = fopen("num.txt", "w");
    sum =n+n1;
    fprintf(file, "%d", sum);
    fclose(file);
    return 0;
}