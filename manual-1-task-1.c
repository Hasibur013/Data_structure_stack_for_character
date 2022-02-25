#include<stdio.h>
#include<stdlib.h>

#define size 10

char stack[size];
int top=-1;

void push(char val)
{
    if(top>=size-1)
        printf("Stack is full! \n");
    else
    {
        top++;
        stack[top]=val;
        printf("Inserted Element = %c\n",stack[top]);
    }
}

void pop()
{
    if(top<=-1)
        printf("No element to delete!\n");
    else
    {
        printf("The popped element = %c\n",stack[top]);
        top--;
    }
}

void show()
{
    if(top>=0)
    {
        printf("Stack element are: \n");
        for(int i=0;i<=top;i++)
        {
            printf("%c ",stack[i]);
        }
    }
    else
        printf("Stack is empty! \n");
}

int main(int argc, char const *argv[] )
{
    int ch;
    char val;

    again:

    do
    {
        printf("\n Menu");
        printf("\n 1. PUSH");
        printf("\n 2. POP");
        printf("\n 3. Show Stack");
        printf("\n 4. exit");
        printf("\n Enter your choose = ");

        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("Enter the value to be paused= ");
            fflush(stdin);
            scanf("%c",&val);
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choose");
            goto again;
            break;
        }

    }while(ch<=3);

    return 0;
}

