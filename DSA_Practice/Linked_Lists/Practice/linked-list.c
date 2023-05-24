// Can you explain and refactor the below basic singly-linked list implementation

#include <stdio.h>
#include <stdlib.h>

struct node {

    int data;
    struct node* next; // Next is the pointer that stores and points to the address of the next node
}; // So what is the sequence?
struct node* head = 0; // Head is the first node
struct node *node1, *node2, *node3, *temp; // use temp only when traversing the list, we wont change head node which will cause problems and break the link
// i want head to be the first node and then 'next' stores address of the next node

int main() {
if (head == 0 ) {
    head == node1;
}
else {
    head = temp = node1;
    node1 = (struct node*)malloc(sizeof(struct node));
    head->next = node2;
    node2->next = node3;
}

}