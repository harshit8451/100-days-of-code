//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include<stdio.h>

int main(void)
{
    char input;
    printf("Enter a character: ");
    scanf("%s", &input);

    if(input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u')
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }
}