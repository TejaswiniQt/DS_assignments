/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdio_ext.h>
#define N 5
int s1[N],s2[N];
int top1=-1,top2=-1,count=0;

void push1(int data)
{
    if(top1==N-1)
    {
        printf("Queue is full\n");
    }
    else
    {
        top1++;
        s1[top1]=data;
    }
}

void push2(int data)
{
    if(top2==N-1)
    {
        printf("Queue is full\n");
    }
    else
    {
        top2++;
        s2[top2]=data;
    }
}

int pop1()
{
    return s1[top1--];
}

int pop2()
{
    return s2[top2--];
}

void enqueue(int x)
{
    push1(x);
    count++;
}

void dequeue()
{
    int i,a,b;
   if(top1==-1 && top2==-1)
   {
       printf("Queue is empty\n");
   }
   else
   {
       for(i=0;i<count;i++)
       {
           a=pop1();
           push2(a);
       }
       b=pop2();
       printf("The dequeed element is:%d\n",b);
       count--;
       for(i=0;i<count;i++)
       {
           a=pop2();
           push1(a);
       }
   }
}

void display()
{
    int i;
    for(i=0;i<=top1;i++)
    {
        printf("%d ",s1[i]);
    }
    printf("\n");
}

int main()
{
    enqueue(5);
    enqueue(2);
    enqueue(1);
    dequeue();
    enqueue(3);
    dequeue();
    display();

    return 0;
}

