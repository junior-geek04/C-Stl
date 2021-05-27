#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n; // creating a node pointer
    n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n; // Finally returning the created node
}
void inorder(struct node*root)
{
    if(root!=NULL)
    { inorder(root->left);
        
        printf("%d ",root->data);
        inorder(root->right);
       
    }
}
int isBST(struct node*root)
{static node*prev=NULL;
    if(root!=NULL)
    { 
       if(!isBST(root->left)){//agar left side bst nhi hai toh directly 0 print kar diya
       return 0;}
       if(prev!=NULL&&root->data<=prev->data)
       {
           return 0;
       }
prev=root;
return(isBST(root->right));
       
       
    }
    else{
        return 1;
    }
}

int main(){
    
   
    // Constructing the root node - Using Function (Recommended)
    //creating a small tree
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p3 = createNode(4);
    struct node *p4 = createNode(1);
    struct node *p2 = createNode(6);

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left=p4;
    p1->right=p3;
inorder(p);
printf("\n");
int temp=isBST(p);
if(temp==1)
{
    printf("YES BST");
}
else{
    printf("NOT AN BST");
}

    return 0;
}