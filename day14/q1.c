/* 
Q27: Write a program to print the sum of the first n odd numbers.

Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include<stdio.h>

int main(void)
{
    int i, n, num = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum += num;
        num += 2;
    }

    printf("%d", sum);

    return 0;
}