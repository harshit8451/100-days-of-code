/* 
Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
#include <math.h>

int main() 
{
    int num, tempNum, remainder;
    int n = 0;
    int result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    tempNum = num;

    while (tempNum != 0) 
    {
        tempNum /= 10;
        ++n;
    }

    tempNum = num;

    while (tempNum != 0) 
    {
        remainder = tempNum % 10;
        result += (int)pow(remainder, n);
        tempNum /= 10;
    }

    if (result == num)
    {
        printf("Armstrong\n");
    } 
    else 
    {
        printf("Not Armstrong\n");
    }

    return 0;
}