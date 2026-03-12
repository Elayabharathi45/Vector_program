#include <stdio.h>
#define MAX 10

int queue[MAX];
int front = 0;
int rear = 0;

// Enqueue operation
void enqueue(int value) 
{
    if (rear == MAX) 
    {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
    } 
    else 
    {
        queue[rear++] = value;
        printf("%d enqueued to queue.\n", value);
    }
}

// Dequeue operation
void dequeue() 
{
    if (front == rear) 
    {
        printf("Queue Underflow! Cannot dequeue.\n");
        return;
    } 
    else 
    {
        int value = queue[front++];
        printf("%d dequeued from queue.\n", value);
    }
}

// Peek operation
void peek() 
{
    if (front == rear) 
    {
        printf("Queue is empty!\n");
        return;
    } else 
    {
        printf("Front element is: %d\n", queue[front]);
    }
}

// Display the queue
void display() 
{
    if (front == rear) 
    {
        printf("Queue is empty!\n");
    } 
    else 
    {
        printf("Queue contents: ");
        for (int i = front; i < rear; i++) 
            printf("%d ", queue[i]);
        
        printf("\n");
    }
}

// Main function to test
int main() 
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();   // Should show 10 20 30
    peek();      // Should show 10
    dequeue();   // Removes 10
    peek();      // Now front is 20
    display();   // Should show 20 30
    return 0;
}
