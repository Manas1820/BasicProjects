#include<stdio.h>
#include<malloc.h>
/* Name : MANAS GUPTA 
   Date Modified : 2:56AM  1/12/2020 
   Description : it is a basic program for --------Simple Linked List------
  ******************** PROGRAM WRITTEN IN C ******************************
*/

struct Node
{
  int data;         //To store the data
  struct Node*next; // To store the value of next Node
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
while(temp1->next !=NULL)
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

void insertNewNodeFromBeginning(struct Node **head,int userValue)// nodeValue-- is the no of node after which user wants a node to be added
{
struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
if((*head)==NULL)
{
  (*head)=temp;
  temp->data=userValue;
  temp->next=NULL;
  //printf("%d\t",**head);
}
else
{
/*This to assign the data in the new node  */
temp->data=userValue;
temp->next=(*head);
(*head)=temp;
}
}

/*To enter node at n position*/

void insertNewNodeInBetween(struct Node **head,int userValue,int n)
{
struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
n--;
if((*head)==NULL && n==0)
{
  (*head)=temp;
  temp->data=userValue;
  temp->next=NULL;
}
else
{
struct Node*temp1=(struct Node*)malloc(sizeof(struct Node));
temp1=(*head);
struct Node*prevNode=(struct Node*)malloc(sizeof(struct Node));
/*This is to traverse to the n th available node */
while(temp1->next !=NULL && n>0)
{
    prevNode=temp1;
    temp1=temp1->next; n--;
}
/*This to assign the data in the new node  */
temp->data=userValue;
prevNode->next=temp;
temp->next=temp1;

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

/* This to delet a node from beginning*/
void deleteNodeFromBeginning(struct Node **head)
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
(*head)=temp1->next;
 /*This is to free the allocated memory */
 free(temp1);
}
}
/*To delete node at n th position*/
void deleteNodeFromNthPosition(struct Node **head,int n)
{
    n--;
if((*head)==NULL && n==0)
{
  printf("List is empty");//will display this message when there is no new node
}
else if((*head)->next ==NULL && n==1)
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
while(temp1->next!=NULL && n>0)
{
    prevNode=temp1;
    temp1=temp1->next;
    n--;
}
prevNode->next=temp1->next;
 /*This is to free the allocated memory */
 free(temp1);
}
}

/*This is to display all the nodes*/
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
    
    /*This is to create a new node from the end*/
    insertNewNodeFromEnd(&head, 1);
    insertNewNodeFromEnd(&head, 2);
    insertNewNodeFromEnd(&head, 3);
    insertNewNodeFromEnd(&head, 4);
    
    /*This is to create a new node from the beginning*/
    insertNewNodeFromBeginning(&head,5);
    insertNewNodeFromBeginning(&head,6);
    
    /*This is to delete a  node from the beginning*/
    deleteNodeFromBeginning(&head);
    
    /*This is to delete a  node from the end*/
    deleteNodeFromEnd(&head);
    
    /*To enter node at n position*/
    insertNewNodeInBetween(&head,7,3);
    
    /*This is to display all the nodes*/
    deleteNodeFromNthPosition(&head,3);
    
    /*display all the nodes*/
    displayAllNode(&head);
    
    
return 0;
}
