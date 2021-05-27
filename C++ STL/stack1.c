
#include <stdio.h>
#include<stdlib.h>
int stack[10];
int top=-1;
void push()
{int data;
    printf("\nEnter the element");
    {
        scanf("%d",&data);
    }
    if(top==9)
    {
        printf("Stack Overflow \n");
        //return 0;
    }
    else{
    top++;
    stack[top]=data;
    }
}

void pop()
{if(top==-1)
{
    printf("\nStack Empty \n");
}
else{
    printf("\nElement popped is %d \n",stack[top]);
    top--;
}
}
void display()
{
    for(int i=0;i<=top;i++)
    {
        printf(" %d ",stack[i]);
    }
    printf("\n");
}
int main()
{//int stack[10];
int c;
do{printf("1. Push \n");
printf("2. Pop \n");
printf("3. Display \n");
printf("4. Exit \n");
printf("Enter your choice");

{
    scanf("%d",&c);
}
    switch(c)
    {
        case 1:
        push();
        break;
        
        case 2:
        pop();
        break;
        
        case 3:
        display();
        break;
        
        case 4:
        exit(0);
        break;
        
        default: printf("Wrong Choice");
    }
}while(1);

    return 0;
}
