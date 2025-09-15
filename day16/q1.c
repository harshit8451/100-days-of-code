/*
Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

int main() {
    int n, i, j;
    int binaryArray[32]; 

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n == 0) 
    {
        printf("0\n");
        return 0;
    }

    i = 0;

    while (n > 0) 
    {
        binaryArray[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (j = i - 1; j >= 0; j--) 
    {
        printf("%d", binaryArray[j]);
    }
    
    printf("\n");

    return 0;
}