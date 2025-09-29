# Linked-list.cpp
# Aim:

To implement a singly linked list where nodes can be inserted at the head, and to display the elements of the linked list.

# Apparatus:
vs code

# Theory: 
A linked list is a linear data structure where each element (called a node) contains data and a pointer/reference to the next node in the sequence. Unlike arrays, linked lists do not store elements in contiguous memory locations, which allows efficient insertion and deletion of nodes.

Insertion at the head means adding a new node before the current first node. This operation updates the head pointer to the new node, and the new node's next pointer points to the old head.

Displaying the linked list involves traversing from the head node through each node using the next pointers until reaching the end (NULL).

# Algorithm:

# code-1
Step 1: Define the Node Class

create a class named Node with:

An integer variable data to store the value of the node.

A pointer next of type Node* to store the address of the next node.

A constructor that:

Takes an integer as input.

Initializes data with the input value.

Initializes next with NULL.

A member function display() to:

Print the value of data.

Print the memory address stored in next.

🔹 Step 2: Create a Node in main()

In the main() function:

Create a pointer l1 of type Node*.

Use new to dynamically allocate a new Node with value 8.

l1 now points to this new node.

🔹 Step 3: Call the display() Function

Use the pointer l1 to call the display() function.

The function prints:

The value stored in data (which is 8).

The address in next (which is NULL, or shown as 0 or (nil) depending on the system).

🔹 Step 5: End Program

Return from the main() function.

Program ends successfully

# code-2
Step 1: Start the Program

Begin execution.

✅ Step 2: Define the node Class

Create a class called node to represent a single element in a linked list.

Inside the node class:

Define data members:

int data → to store the value of the node.

node* next → a pointer to the next node in the list.

Constructor:

Input: int n

Set data = n

Set next = NULL (meaning this is the last node for now)

✅ Step 3: Define the insert_head() Function

Purpose: Add a new node at the beginning of the linked list.

Input:

node*& head → a reference to the head of the list.

int data → value to be inserted.

Create a new node using new_node = new node(data) → this allocates memory and initializes data and next = NULL.

Set new_node->next = head → this links the new node to the existing list.

Update head = new_node → this makes the new node the first (head) of the list.

✅ Step 4: Define the display() Function

Purpose: Print all values in the linked list.

Input:

node* head → starting point of the list.

Steps:

Set a temporary pointer temp = head.

Loop while temp != NULL:

Print temp->data followed by "->".

Move to the next node: temp = temp->next.

After the loop, print "NULL" to indicate end of the list.

✅ Step 5: Inside main() Function

Initialize the head pointer:

node* head = NULL → list is currently empty.

Insert nodes:

Call insert_head(head, 1):

Creates a new node with value 1, sets it as the head.

Call insert_head(head, 2):

Creates a new node with value 2, places it before the existing node 1.

Head now points to 2.

Call insert_head(head, 3):

Creates a new node with value 3, places it before node 2.

Head now points to 3.

# Conclusion:-
A linked list is a dynamic data structure that allows efficient insertions and deletions.

Inserting at the head involves updating the head pointer to a newly created node.

Traversing the linked list allows displaying all node values.

The implementation demonstrates how to build and traverse a simple singly linked list with head insertion.
