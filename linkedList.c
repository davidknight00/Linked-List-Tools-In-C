/*
Author: David Knight

These helper functions allow for modification of single-linked lists.
This helper is meant as a demonstration/practice tool.
Datatype can be changed accordingly.
These functions are not guaranteed to work. Use at your own discretion.
Test Notes: Tested and compiled on Linux-Ubuntu 20.04
*/
#include "linkedList.h"

// function implementations

List *appendNode(List *headNode, int newValue)
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

List *clearList(List *wkgPtr)
{
    // recursively clear linked list - return null to head
    if(wkgPtr != NULL)
    {
        wkgPtr->nextPtr = clearList(wkgPtr->nextPtr);
        free(wkgPtr);
    }
    
    return NULL;
}

void displayList(List *headNode)
{
    // display the linked list data
    if( headNode != NULL )
    {
        while( headNode != NULL )
        {
            printf( "%d", headNode->dataValue );
        
            if( headNode->nextPtr != NULL )
            {
                printf( ", " );
            }
            headNode = headNode->nextPtr;
        }
        printf( "\n" );
    }
    else
    {
        printf( "The linked list is currently empty\n" );
    }
}

List *insertAtHead(List *headNode, int newValue)
{
    List *newHeadNode = (List *)malloc(sizeof(List));
    newHeadNode->dataValue = newValue;
    newHeadNode->nextPtr = headNode;

    return newHeadNode;
}

List *removeAtIndex(List *headPtr, int position)
{
    List *wkgPtr = NULL;
    List *tempPtr = NULL;
    int index;
    
    // remove the head pointer
    if(headPtr != NULL && position == 0)
    {
        tempPtr = headPtr->nextPtr;
        free(headPtr);
        return tempPtr;
    }
    
    // check everything from the next pointer onwards
    tempPtr = headPtr;
    wkgPtr = headPtr->nextPtr;
    index = 1;
    
    while(wkgPtr != NULL)
    {
        if(index == position)
        {
            tempPtr->nextPtr = wkgPtr->nextPtr;
            free(wkgPtr);
            return headNode;
        }
        
        index+=1;
        tempPtr = tempPtr->nextPtr;
        wkgPtr = wkgPtr->nextPtr;
    }
    
    // return the unchanged head node
    return headNode;
}

