//Create an program which will simulate the working of stack with options like
//push, pop, tos and traverse
#include <stdio.h>

int top = -1;
int stack_arr[5];

void push()
{
    if (top == 4)
    {
        printf(">>>Stack overflow\n");
    }
    else
    {
        //top++;
        int num;
        printf("Enter no.to push:\n>>> ");
        scanf("%d", &num);
        stack_arr[++top] = num;
    }
    printf("------------------------------------\n");
}
void pop()
{
    if (top == -1)
        printf("Stack underflow\n");
    else
    {
        printf("Popped no. is \n>>> %d", stack_arr[top--]);
        printf("\n");
        //top--;
    }
    printf("------------------------------------\n");
}
void tos()
{
    if (top == -1)
        printf("Stack is empty\n");
    else
    {
        printf("Tossed no is \n>>> %d", stack_arr[top]);
        printf("\n");
    }
    printf("------------------------------------\n");
}
void traverse()
{
    if (top == -1)
        printf("Stack is empty\n");
    else
    {
        printf("Stack is: ");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack_arr[i]);
        }
        printf("\n");
    }
    printf("------------------------------------\n");
}

int main()
{
    int i = 0;
    do
    {
        printf("----------------MENU-----------------\n");
        printf("Choose the option from following: \n");
        printf("1.Push\n2.Pop\n3.Tos\n4.Traverse\n5.Exit\n");
        printf("Option No.: ");
        scanf("%d", &i);
        printf("--------------------------------------\n");

        switch (i)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            tos();
            break;
        case 4:
            traverse();
            break;
        case 5:
            break;
        default:
            printf("Wrong input :-(");
        }
    } while (i != 5);

    return 0;
}