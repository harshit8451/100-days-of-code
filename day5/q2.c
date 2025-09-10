//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include<stdio.h>

int main(void)
{
    int time, hrs, mins, secs;

    printf("Enter time in seconds: ");
    scanf("%d", &time);

    hrs = time / 3600;
    mins = (time % 3600) / 60;
    secs = time % 60;
    printf("%d : %d : %d\n", hrs, mins, secs);

    return 0;
}