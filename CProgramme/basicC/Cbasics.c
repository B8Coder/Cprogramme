#include <stdio.h>
int main()
{
    /*
    BASIC FORMAT OF C
    */
    int a = 2; // integer
    int b;
    float f = 2.33; // Numbers with decimals
    double d = 4.000880;
    char c = 'J'; // character

    printf("a is an integer %i.\n", a); // Use for printing
    printf("f is an float %.2f.\n", f);
    printf("c is an character %c.\n", c);
    printf("c is an double %d.\n", d);

    // Relational operator: returns true or false
    int j = 8, k = 9;
    printf("%d\n", j < k);
    printf("%d\n", j == k);
    printf("%d\n", j != k);
    printf("%d\n", j > k);
    printf("%d\n", j < k);

    // Logical Operator : returns true or false as per condition
    int x = 0, z = 1;
    printf("the logical operator returned %d\n", x && z);
    printf("the logical operator returned %d\n", x || z);
    printf("the logical operator returned %d\n", !x);
    printf("the logical operator returned %d\n", !z);

    // taking inputs from user
    int age;
    printf("\n Enter youe age:");

    scanf("%d", &age);
    printf("\nYour age is %d:", age);

    // Type casting(Converting one type of  data type into another)

// while loop
    int num, num1;
    printf("\nEnter the  first number: ");
    scanf("%d", &num);
    printf("\nEnter the  second number:");
    scanf("%d", &num1);
    printf("\n num/num1 is %.2f.", (float)num / num1);

    


    return 0;
}