#include<stdio.h>
#include<malloc.h>
/* Name : MANAS GUPTA 
   Date Modified : 2:56AM  1/12/2020 
   Description : it is a basic program for --------Simple Linked List------
  ******************** PROGRAM WRITTEN IN C ******************************
*/

struct Node
{
  int data;
  struct Node*next;
};
/*This is to create a new node from the end*/
void insertNewNodeFromEnd(struct Node **head,int userValue)
{
struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
if((*head)==NULL)
{
  (*head)=temp;
  temp->data=userValue;
  temp->next=NULL;
//  printf("%d\t",temp->data);
}
else
{
struct Node*temp1=(struct Node*)malloc(sizeof(struct Node));
temp1=(*head);
/*This is to traverse to the last available node */
while(temp1!=NULL)
{
    temp1=temp1->next;
}
/*This to assign the data in the new node  */
temp->data=userValue;
temp1->next=temp;
temp->next=NULL;
//printf("%d\t",temp->data);
}
}
/*This is to create a new node from the beginning*/
void insertNewNodeFromBeginning(struct Node **head,int nodeValue,int userValue)// nodeValue-- is the no of node after which user wants a node to be added
{
struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
if((*head)==NULL)
{
  (*head)=temp;
  temp->data=userValue;
  temp->next=NULL;
//  printf("%d\t",temp->data);
}
else
{
/*This to assign the data in the new node  */
temp->data=userValue;
temp->next=(*head);
(*head)=temp;
//printf("%d\t",temp->data);
}

}
void displayAllNode(struct Node **head)
{
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    temp=(*head);
    while(temp!=NULL){
     printf("%d\t",temp->data);
     temp=temp->next;
    }
}
//driver code
int main()
{
    struct Node *head=NULL;
    insertNewNodeFromEnd(&head, 5);
    insertNewNodeFromEnd(&head, 6);
    insertNewNodeFromEnd(&head, 7);
    insertNewNodeFromEnd(&head, 9);
  //  insertNewNodeFromEnd(&head, 10);
   // insertNewNodeFromBeginning(&head,3,78);
    for (struct Node* temp = head; temp != NULL; temp = temp->next) 
        printf("%d",temp->data);
    
return 0;
}