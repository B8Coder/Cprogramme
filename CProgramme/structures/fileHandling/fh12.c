/* to  create and store sname,address and contact no. of students to a file named("LOCATION.DAT")
    and dispaly all the record in proper format.
*/
#include <stdio.h>
int main()
{
    char sname[15];
    char add[20];
    int contactno;
    int n, i;
    printf("Enter the number of Students:");
    scanf("%d", &n);
    FILE *file;
    file = fopen("LOCATION.dat", "w");
    fprintf(file,"Name\tAddress\tContactno.:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of %d student:", i + 1);
        scanf("%s", sname);
        fprintf(file, "%s\t ", sname);
        printf("Enter the address of %d student:", i + 1);
        scanf("%s", add);
        fprintf(file, "%s\t   ", add);
        printf("Enter the contact number of %d student:", i + 1);
        scanf("%d", &contactno);
        fprintf(file, "%d", contactno);
        fprintf(file,"\n");
    }

    fclose(file);
    char ch;
    file=fopen("LOCATION.dat","r");
    printf("Name\tAddress\tContactno.:\n");
    while (ch=!EOF)
    {
        fscanf(file,"%s %s %d",sname,add,&contactno);
        printf("%s %s %d",sname,add,contactno);
    }
    fclose(file);
    return 0;
}