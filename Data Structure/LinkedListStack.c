#include<stdio.h>
#include<malloc.h>
/* Name : MANAS GUPTA 
   Date Modified : 2:56AM  1/12/2020 
   Description : it is a basic program for --------Stack Using Simple Linked List------
   Using the concept Of LIFO (Last In First Out) 
  ******************** PROGRAM WRITTEN IN C ******************************
*/

/*This is to create a new node from the end*/
void insertNewNodeFromEnd(struct Node **head,int userValue)
{
struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
if((*head)==NULL)
{
  (*head)=temp;
  temp->data=userValue;
  temp->next=NULL;
}
else
{
struct Node*temp1=(struct Node*)malloc(sizeof(struct Node));
temp1=(*head);
/*This is to traverse to the last available node */
while(temp1->next !=NULL)
{
    temp1=temp1->next;
}
/*This to assign the data in the new node  */
temp->data=userValue;
temp1->next=temp;
temp->next=NULL;
}
}

/* This is to delete a new node from end*/
void deleteNodeFromEnd(struct Node **head)
{
if((*head)==NULL)
{
  printf("List is empty");//will display this message when there is no new node
}
else if((*head)->next ==NULL)
{
    free((*head)); // will delete the only node avaible in the program
    *head=NULL;
}
else
{
struct Node*temp1=(struct Node*)malloc(sizeof(struct Node)); // create a temporary variable to store value
temp1=(*head);
struct Node*prevNode=(struct Node*)malloc(sizeof(struct Node));
/*This is to traverse to the last available node */
while(temp1->next!=NULL)
{
    prevNode=temp1;
    temp1=temp1->next;
}
prevNode->next=NULL;
 /*This is to free the allocated memory */
 free(temp1);
}
}


//drive code

int main()
{
    struct Node *head=NULL;
    
    /*This is to create a new node from the end*/
    insertNewNodeFromEnd(&head, 1);
    insertNewNodeFromEnd(&head, 2);
    insertNewNodeFromEnd(&head, 3);
    insertNewNodeFromEnd(&head, 4);

    /*This is to delete a  node from the end*/
    deleteNodeFromEnd(&head);
}