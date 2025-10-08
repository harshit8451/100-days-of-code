/*
Q34: Write a program to check if a number is prime.

Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include<stdio.h>

int is_prime(int a)
{
    for(int i = 2; i < a/2; i++)
    {
        if(a % i == 0)
        {
            printf("Not prime..");
            return 0;
        }
    }
    printf("Prime number!!");
}


int main(void)
{
    int input;

    printf("Enter a number: ");
    scanf("%d", &input);
    is_prime(input);

    return 0;
}
