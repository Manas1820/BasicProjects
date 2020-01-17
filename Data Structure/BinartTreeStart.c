#include<stdio.h>
#include<stdlib.h>
struct Tree
{
  int data;
  struct Tree *left;
  struct Tree *right;
};

/*To insert a new tree node

insertNode(struct Tree **root,int data)
{
    struct Tree *treeNode =(struct Tree *)malloc(sizeof(struct Tree));
   if((*root)->left==NULL)
   {
     (*root)->left=treeNode;
     treeNode->left=NULL;
     treeNode->right=NULL;
     treeNode->data=data;
   }
   else if((*root)->right==NULL)
   {
     (*root)->right=treeNode;
     treeNode->left=NULL;
     treeNode->right=NULL;
     treeNode->data=data;
   }
}
*/
struct Tree* newNode(int data)
{
     struct Tree* node = (struct Tree*)
                                  malloc(sizeof(struct Tree));
     node->data = data;
     node->left = NULL;
     node->right = NULL;

     return(node);
}

void printPostorder(struct Tree* node)
{
     if (node == NULL)
        return;

     printPostorder(node->left);

     printPostorder(node->right);

     printf("%d ", node->data);
}


void printInorder(struct Tree* node)
{
     if (node == NULL)
          return;


     printInorder(node->left);


     printf("%d ", node->data);


     printInorder(node->right);
}


void printPreorder(struct Tree* node)
{
     if (node == NULL)
          return;

     printf("%d ", node->data);


     printPreorder(node->left);


     printPreorder(node->right);
}

// Driver code
int main()
{
struct Tree *root  =newNode(1);
     root->left    = newNode(2);
     root->right   = newNode(3);
     root->left->left = newNode(4);
     root->left->left->left= newNode(5);

printPostorder(root);
getchar();
return 0;
}
