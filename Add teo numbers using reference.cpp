#include <stdio.h>

int addTwo(int*x, int *y){
    int sum;
    sum = *x + *y;
    return sum;
}

int main()
{
    int a, b, sum;
    int*p, *q;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    sum = addTwo(&a, &b);
    printf("Sum of the two numbers is: %ld", sum);
    return 0;
}
