Sure, here are some detailed notes on Doubly Linked Lists in C:

**Introduction**

A doubly linked list is a type of linked list in which each node contains a reference to the next node as well as the previous node in the sequence. This allows for more flexibility and easier manipulation of the list, but at the cost of extra storage for the previous node reference.

**Node Structure**

In a doubly linked list, each node contains three fields: data, a pointer to the next node in the sequence (next pointer), and a pointer to the previous node (prev pointer). Here's a simple representation of a node in C:

```c
struct Node {
  int data;
  struct Node* next; // Pointer to next node
  struct Node* prev; // Pointer to previous node
};
```

**Creating a Doubly Linked List**

To create a doubly linked list, you start by creating the head node and then add new nodes by updating the next and prev pointers appropriately. Here's a simple function to add a node at the end of the list:

```c
void append(struct Node** head_ref, int new_data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  struct Node* last = *head_ref;
  
  new_node->data = new_data;
  new_node->next = NULL;
  
  if (*head_ref == NULL) {
    new_node->prev = NULL;
    *head_ref = new_node;
    return;
  }
  
  while (last->next != NULL)
    last = last->next;
  
  last->next = new_node;
  new_node->prev = last;
}
```

**Traversing a Doubly Linked List**

Traversing a doubly linked list can be done in both directions due to the presence of the prev pointer. Here's a simple function to print the list in forward direction:

```c
void printList(struct Node* node) {
  while (node != NULL) {
    printf("%d ", node->data);
    node = node->next;
  }
}
```

**Deleting a Node**

Deleting a node in a doubly linked list requires updating the next pointer of the node before it and the prev pointer of the node after it. Here's a simple function to delete a node:

```c
void deleteNode(struct Node** head_ref, struct Node* del) {
  if (*head_ref == NULL || del == NULL)
    return;
  
  if (*head_ref == del)
    *head_ref = del->next;
  
  if (del->next != NULL)
    del->next->prev = del->prev;
  
  if (del->prev != NULL)
    del->prev->next = del->next;
  
  free(del);
}
```

**Complexity**

The time complexity for operations like insertion, deletion, and traversal in a doubly linked list is O(n) as we may have to traverse the entire list. The space complexity is O(n) due to the storage required for n elements in the list.

Remember, while doubly linked lists provide more flexibility, they do come with the overhead of extra storage for the prev pointer and slightly more complex code for handling the prev and next pointers.

For more detailed information, you can refer to this [source](https://www.geeksforgeeks.org/doubly-linked-list/).
