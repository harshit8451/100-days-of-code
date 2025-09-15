/*

Q29: Write a program to calculate the factorial of a number.

Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include<stdio.h>

int main(void)
{
    int fact = 1, i, num;

    printf("Enter a number to get its factorial: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    {
        fact *= i;
    }

    printf("%d", fact);

    return 0;
}