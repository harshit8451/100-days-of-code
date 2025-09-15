/*
Q32: Write a program to check if a number is a palindrome.

Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include<stdio.h>

int main(void) 
{
    int n, num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    n = num;

    while (n != 0) 
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }

    if(num == reversed)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a Palindrome");
    }

    return 0;
}