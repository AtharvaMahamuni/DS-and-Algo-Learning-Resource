/*
    Cpp program to reverse the string with the help of stack.
*/

#include <iostream>
#include <string.h>

int main()
{
    char mString[] = "computer";
    int n;

    printf("Input: %s", mString);

    for (n = 0; mString[n] != '\0'; n++)
        ;

    char mStack[n]; //Array of stack
    int top = -1;

    for (int i = 0; i < n; i++)
    {
        top++;
        mStack[top] = mString[i];
    }

    for (int i = 0; i <= n; i++)
    {
        mString[i] = mStack[top];
        top--;
    }

    printf("\nOutput: %s", mString);

    return 0;
}