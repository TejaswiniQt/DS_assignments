/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdio_ext.h>
#define N 3
int stack[N];
int top=-1;

void push();
void pop();
void display();
int main()
{
    int choice;
    char ch;
     do
    {
    printf("1.push\n2.pop\n3.display\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:push();
        break;
        case 2:pop();
        break;
        case 3:display();
        break;
    }
    printf("press y to continue n to stop\n");
    __fpurge(stdin);
    scanf("%c",&ch);
    }while(ch=='y');
    return 0;
}

void push()
{
    int x;
    printf("Enter data: ");
    scanf("%d",&x);
    if(top==(N-1))
    {
        printf("stack is full\n");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}

void pop()
{
    int item;
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
       item=stack[top];
        top--;
        printf("The popped element: %d\n",item);
    }
}

void display()
{
    int i;
    printf("The status of stack\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    printf("\n");
}



