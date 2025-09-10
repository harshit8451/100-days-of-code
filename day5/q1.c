//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include<stdio.h>
#include<math.h>

int main(void)
{

    int p, r, t;
    float sim, comp, amount;
    
    printf("Enter Principle amount: ");
    scanf("%d", &p);
    printf("Enter Rate: ");
    scanf("%d", &r);
    printf("Enter Time: ");
    scanf("%d", &t);

    sim = (p * r * t) / 100.00;
    amount = p * pow((1 + r / 100.0), t);
    comp = amount - p;

    printf("Simple Interest = %.2f\n", sim);
    printf("Compound Interest = %.2f\n", comp);

    return 0;
}