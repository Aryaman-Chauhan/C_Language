#include "linkedList.h"

void printNode(NODE n1)
{
    printf("Node is: ");
    printf("%d\n",n1->ele);
}



LIST createNewList(){
	LIST myList;
	myList = (LIST) malloc(sizeof(struct linked_list));
	// myList = (LIST) malloc(sizeof(*LIST));
	myList->count=0;
	myList->head=NULL;
	return myList;
}

NODE createNewNode(int value){
	NODE myNode;
	myNode = (NODE) malloc(sizeof(struct node));
	// myList = (NODE) malloc(sizeof(*NODE));
	myNode->ele=value;
	myNode->next=NULL;
	return myNode;
}


void insertNodeIntoList(NODE n1, LIST l1){
	// case when list is empty
	if(l1->count == 0) {
		l1->head = n1;
		n1->next = NULL;
		l1->count++;
	}
	// case when list is non empty
	else {
		n1->next = l1->head;
		l1->head = n1;
		l1->count++;
	}
}

void insertNodeAtEnd(NODE n1, LIST l1){
    // case when list is empty
	if(l1->count == 0) {
		l1->head = n1;
		n1->next = NULL;
		l1->count++;
	}
	// case when list is non empty
	else {
        NODE temp = l1->head;
        while(temp->next!=NULL)
        {
            temp = temp->next;            
        }
        temp->next = n1;
        n1->next = NULL;
        l1->count++;
		
	}	
}


NODE search(LIST l1, int value)
{
    if (l1->head == NULL)
    {
        printf("There are no elements in the list to search\n");
        return NULL;
    }
    else
    {
        NODE temp = l1->head;
        while(temp!=NULL)
        {
            if (temp->ele == value)
                return temp;
            temp = temp->next;
        }
        printf("Value not found in the list\n");
        return NULL;
    }
}

void insertAfter(int searchEle, NODE n1, LIST l1)
{
     // case when list is empty
	if(l1->count == 0) {
		l1->head = n1;
		n1->next = NULL;
		l1->count++;
	}
	// case when list is non empty
	else
    {
        NODE temp = l1->head;
        NODE prev = temp;
        while(temp!=NULL)
        {
            if (temp->ele == searchEle)
                break;
            prev = temp;
            temp = temp->next;            
        }
        // I have to insert after temp;
        if(temp==NULL) 
        {
            printf("Element not found in the list. Not inserting\n");
            // prev->next = n1;
            // n1->next = NULL;
            // l1->count++;
            return;
        }
        else{
            if(temp->next == NULL)
            {
                temp->next = n1;
                n1->next = NULL;
                l1->count++;
            }
            else
            {
                prev = temp;
                temp = temp->next;
                prev->next = n1;
                n1->next = temp;
                l1->count++;
            }
            return;
        }       
		
	}	
    return;
}

void removeFirstNode(LIST l1)
{
    if (l1->count == 0)
    {
        printf("List is empty. Nothing to remove\n");        
    }
    else
    {
        NODE temp = l1->head;
        l1->head = temp->next;
        free(temp);
        l1->count--;        
    }
    return;
}

void removeLastNode(LIST l1)
{
    if (l1->count == 0)
    {
        printf("List is empty. Nothing to remove\n");        
    }
    else if(l1->count == 1)
    {        
        l1->count--;
        free(l1->head);
        l1->head = NULL;
    }
    else
    {
        NODE temp = l1->head;
        NODE prev = temp;
        while((temp->next) != NULL)
        {
            prev=temp;
            temp = temp->next;
        }
        prev->next = NULL;
        l1->count--;
        free(temp);
    }
    return;

}

void removeElem(int value, LIST l1)
{
    NODE hd=l1->head;
    NODE temp=hd;
    if(hd!=NULL){
        while(temp!=NULL){
            if (hd->ele==value)
            {
                if(l1->head->next==NULL){
                    free(l1->head);
                    l1->head=NULL;
                    return;
                }
                else{
                    l1->head=temp->next;
                    return;
                }
            }
            else if(temp->next->ele==value){
                NODE t2=temp->next->next;
                free(temp->next);
                temp->next=t2;
                return;
            }
            else{
                temp=temp->next;
            }
        }
    }
    else{
        printf("Empty List\n");
        return;
    }
    if(temp->next==NULL && temp->ele != value){
    printf("Element not present, so can't be deleted");
    }
}

void printList(LIST l1)
{
    if(l1->head == NULL){
        printf("Empty List\n");
    }
    else{
        NODE tmp= l1->head;
        while(tmp!=NULL){
            if(tmp->next==NULL){
                printf("%d \n",tmp->ele);
                break;
            }
            else {
                printf("%d -> ",tmp->ele);
                tmp=tmp->next;
            }
        }
    }
}

