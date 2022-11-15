/*
Author: David Knight

These helper functions allow for modification of single-linked lists.
This helper is meant as a demonstration/practice tool.
Datatype can be changed accordingly.
These functions are not guaranteed to work. Use at your own discretion.
Test Notes: Tested and compiled on Linux-Ubuntu 20.04
*/
#include "linkedListFunctions.h"

// function implementations

struct node *appendNode( struct node *headNode, int newValue )
{
    // insert node at null node - advance recursively otherwise
    if(headNode == NULL)
    {
        struct node *newNode = (struct node*)malloc( sizeof( struct node ) );
        newNode->data = newValue;
    }
    else
    {
        headNode->nextPtr = appendNode(headNode->nextPtr, newValue);
    }
    
    // return the updated head node
    return headNode;
}

struct node *clearLinkedList( struct node *workingPtr )
{
    // initialize function/variables
    
    // check if the working pointer is NOT null
    if( workingPtr != NULL )
    {
        // check if the working pointers next pointer is NOT null
        if( workingPtr->nextPtr != NULL )
        {
            // recursively call the function with the next pointer
                // function: clearLinkedList
            clearLinkedList( workingPtr->nextPtr);
        }

        // free the current node
            // function: free
        free( workingPtr );
    }
                
    // return NULL when the linked list is cleared of all data
    return NULL;
}

void displayLinkedList( struct node *headNode )
{
    // initialize funtion/variables
    
    // display the linked list data
        // if the head node is NOT null
    if( headNode != NULL )
    {
            // while the head node is NOT null
        while( headNode != NULL )
        {
                // print the current nodes data
                    // function: printf
            printf( "%d", headNode->dataValue );
            
                // if the pointer to the next node is NOT null
            if( headNode->nextPtr != NULL )
            {
                    // print a comma space
                        // function: printf
                printf( ", " );
            }

                // update the current nodes pointer
            headNode = headNode->nextPtr;
        }
    }

        // otherwise
    else
    {
            // print an error message that the linked list is null
                //function: printf
        printf( "The linked list is currently empty" );
    }

    // print a new line
        // function: printf
    printf( "\n" );
}

struct node *insertNode( struct node *headNode, int newValue )
{
    // initialize function/variables
        // initialize a new head node
    struct node *newHeadNode = (struct node*)malloc( sizeof( struct node ) );
        
    // add the new value to the new head node
    newHeadNode->dataValue = newValue;

    // point the new head to the original head pointer
    newHeadNode->nextPtr = headNode;

    // return the new head pointer
    return newHeadNode;
}

struct node *removeNthNode( struct node *headNode, int position )
{
    // initialize function/variables
        // initialize a temporary and working pointer to the head node
    struct node *temporaryPtr, workingPtr = headNode;

    // if the head node is NOT null
        // if the requested removal is the first position
            // set the temporary pointer to the head node and advance the head
            // free the temporary pointer
                // function: free
        // otherwise
            /*
            while the working pointer's next pointer is NOT null and the
            position is greater than 2
            */
                // advance the working pointer
                // decrease the position
            /*
            if the working pointer's next pointer is NOT null and the 
            position is 2
            */
                // set the temporary pointer to the working pointer's next
                // advance the working pointer ahead by 2
                // free the temporary pointer
                    // function: free
                    
    // return the updated head node
    return headNode;
}

