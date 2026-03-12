#include <stdio.h>
#define MAX 10  // Maximum size of the stack

int stack[MAX];  // Stack array
int top = 0;    // Stack is empty when top is -1

// Function to push an element to the stack
void push(int value) 
{
    if (top == MAX ) 
    {
        printf("Stack Overflow! Cannot push %d\n", value);
    } 
    else 
    {
        stack[top++] = value;
        printf("%d pushed to stack.\n", value);
    }
}

// Function to pop an element from the stack
void pop() {
    if (top == 0) 
    {
        printf("Stack Underflow! Cannot pop.\n");
        return;
    } 
    else 
    {
        int popped = stack[--top];
        printf("%d popped from stack.\n", popped);
    }
}

// Function to peek (view) the top element of the stack
void peek() 
{
    if (top == 0) 
    {
        printf("Stack is empty!\n");
        return;
    } 
    else 
    {
        printf("Top element is: %d\n", stack[top-1]);
    }
}

// Function to display all stack elements
void display() 
{
    if (top == 0) 
    {
        printf("Stack is empty!\n");
    } 
    else 
    {
        printf("Stack contents: ");
        for (int i = 0; i < top; i++) 
            printf("%d ", stack[i]);
        
        printf("\n");
    }
}

// Main function for testing
int main() 
{
    push(10);
    push(20);
    push(30);
    display();   // Should show 10 20 30
    peek();      // Should show 30
    pop();       // Should remove 30
    peek();      // Should show 20
    display();   // Should show 10 20

    return 0;
}
