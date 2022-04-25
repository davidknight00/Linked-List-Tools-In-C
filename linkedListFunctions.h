// preprocessor directive
#ifndef LINKED_LIST_FUNCTIONS_H
#define LINKED_LIST_FUNCTIONS_H

// header files
#include <stdio.h>
#include <stdlib.h>

// data structures
struct node
{
    int dataValue;
    struct node *nextPtr;
};

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
struct node *appendNode( struct node *headNode, int newValue );

/*
Name: clearLinkedList
Process: recursively calls the function until all data is freed
Function Input/Parameters: a working pointer to the head node ( struct node )
Function Output/Parameters: none
Function Output/Returned: NULL
Device Input/Keyboard: none
Device Output/Monitor: none
*/
struct node *clearLinkedList( struct node *workingPtr );

/*
Name: displayLinkedList
Process: displays all data in the linked list from the head
Function Input/Parameters: head node ( struct node )
Function Output/Parameters: none
Function Output/Returned: none
Device Input/Keyboard: none
Device Output/Monitor: data inside the linked list starting from the head
                            or error message if the linked list is empty
Dependencies: none
*/
void displayLinkedList( struct node *headNode );

/*
Name: insertNode
Process: inserts a new node at the head of the linked list
Function Input/Parameters: head node ( struct node ) and the new value ( int )
Function Output/Parameters: none
Function Output/Returned: the linked list at the new head node ( struct node )
Device Input/Keyboard: none
Device Output/Monitor: none
Dependencies: stdlib
*/
struct node *insertNode( struct node *headNode, int newValue );

/*
Name: removeNthNode
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
struct node *removeNthNode( struct node *headNode, int position );

#endif  // end LINKED_LIST_FUNCTIONS_H
