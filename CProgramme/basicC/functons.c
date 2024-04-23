
#include <stdio.h>
float sum(float a, float b)
{
    return a + b;
}
float avg(float a, float b)
{
    return (a + b) / 2;
}
int main()
{
    float num1, num2;
    printf("\n\nEnter first number: ");
    scanf("%f", &num1);
    printf("\n\nEnter second number: ");
    scanf("%f", &num2);

    printf("The sum of two numbers is: %.2f\n", sum(num1, num2));
    printf("The average of two numbers is: %.2f", avg(num1, num2));
    return 0;
}