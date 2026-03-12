#include <stdio.h>
#include <stdlib.h>
struct Node {
    char ch;
    int count;
    struct Node* next;
};
void addOrUpdate(struct Node** head, char c) 
{
    struct Node* current = *head;
    // Search if character already exists
    while (current != NULL) 
    {
        if (current->ch == c) 
        {
            current->count++;
            return;
        }
        current = current->next;
    }
    // If not found, create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->ch = c;
    newNode->count = 1;
    newNode->next = *head;
    *head = newNode;
}
void printList(struct Node* head) 
{
    while (head != NULL) {
        printf("%c--> %d\n", head->ch, head->count);
        head = head->next;
    }
}
int main() 
{
    char str[] = "hello world";
    struct Node* head = NULL;

    for (int i = 0; str[i] != '\0'; i++) 
    {
        addOrUpdate(&head, str[i]);
    }
    printList(head);
}
