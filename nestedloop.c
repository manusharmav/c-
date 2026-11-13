# include <stdio.h>

int main() {
    int a, b, c, sum;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Calculate sum
    sum = a + b + c;

    // Output the result
    printf("Sum = %d\n", sum);

    return 0;
}