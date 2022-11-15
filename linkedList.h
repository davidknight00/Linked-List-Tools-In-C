// preprocessor directive
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// header files
#include <stdio.h>
#include <stdlib.h>

// data structures
struct LinkedList
{
    int data;
    struct LinkedList *nextPtr;
} List;

// function prototypes

/*
Name: appendNode
Process: Adds a new node at the end of the linked list
Function Input/Parameters: head node ( struct node ) and the new value ( int )
Function Output/Parameters: none
Function Output/Returned: head node to updated linked list ( struct node )
Device Input/Keyboard: none
Device Output/Monitor: none
Dependencies: stdlib
*/
List *appendNode(List *headNode, int newValue);

/*
Name: clearLinkedList
Process: recursively calls the function until all data is freed
Function Input/Parameters: a working pointer to the head node ( struct node )
Function Output/Parameters: none
Function Output/Returned: NULL
Device Input/Keyboard: none
Device Output/Monitor: none
*/
List *clearLinkedList(List *workingPtr);

/*
Name: displayList
Process: displays all data in the linked list from the head
Function Input/Parameters: head node ( struct node )
Function Output/Parameters: none
Function Output/Returned: none
Device Input/Keyboard: none
Device Output/Monitor: data inside the linked list starting from the head
                            or error message if the linked list is empty
Dependencies: none
*/
void displayList(List *headNode);

/*
Name: insertAtHead
Process: inserts a new node at the head of the linked list
Function Input/Parameters: head node ( struct node ) and the new value ( int )
Function Output/Parameters: none
Function Output/Returned: the linked list at the new head node ( struct node )
Device Input/Keyboard: none
Device Output/Monitor: none
Dependencies: stdlib
*/
List *insertAtHead(List *headNode, int newValue);

/*
Name: removeAtIndex
Process: iterates through linked list up to Nth position,removes node; if
                                position index is beyond the linked list,
                                takes no action
Function Input/Parameters: head node ( struct node ) and the position ( int )
Function Output/Parameters: none
Function Output/Returned: head pointer (node *)
Device Input/Keyboard: none
Device Output/Monitor: none
Dependencies: free
*/
List *removeAtIndex(List *headNode, int position);

#endif  // end LINKED_LIST__H
