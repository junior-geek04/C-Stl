//PRE ORDER CODE................
// #include<stdio.h>
// #include<malloc.h>

// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
// };

// struct node* createNode(int data){
//     struct node *n; // creating a node pointer
//     n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
//     n->data = data; // Setting the data
//     n->left = NULL; // Setting the left and right children to NULL
//     n->right = NULL; // Setting the left and right children to NULL
//     return n; // Finally returning the created node
// }
// void preorder(struct node*root)
// {
//     if(root!=NULL)
//     {
//         printf("%d ",root->data);
//         preorder(root->left);
//         preorder(root->right);
//     }
// }

// int main(){
    
   
//     // Constructing the root node - Using Function (Recommended)
//     //creating a small tree
//     struct node *p = createNode(2);
//     struct node *p1 = createNode(1);
//     struct node *p3 = createNode(5);
//     struct node *p4 = createNode(8);
//     struct node *p2 = createNode(4);

//     // Linking the root node with left and right children
//     p->left = p1;
//     p->right = p2;
//     p1->left=p3;
//     p1->right=p4;
// preorder(p);

//     return 0;
// }

//POST ORDER CODE................
// #include<stdio.h>
// #include<malloc.h>

// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
// };

// struct node* createNode(int data){
//     struct node *n; // creating a node pointer
//     n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
//     n->data = data; // Setting the data
//     n->left = NULL; // Setting the left and right children to NULL
//     n->right = NULL; // Setting the left and right children to NULL
//     return n; // Finally returning the created node
// }
// void postorder(struct node*root)
// {
//     if(root!=NULL)
//     { postorder(root->left);
//         postorder(root->right);
//         printf("%d ",root->data);
       
//     }
// }

// int main(){
    
   
//     // Constructing the root node - Using Function (Recommended)
//     //creating a small tree
//     struct node *p = createNode(2);
//     struct node *p1 = createNode(1);
//     struct node *p3 = createNode(5);
//     struct node *p4 = createNode(8);
//     struct node *p2 = createNode(4);

//     // Linking the root node with left and right children
//     p->left = p1;
//     p->right = p2;
//     p1->left=p3;
//     p1->right=p4;
// postorder(p);

//     return 0;
// }

//INORDER...........
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

int main(){
    
   
    // Constructing the root node - Using Function (Recommended)
    //creating a small tree
    struct node *p = createNode(2);
    struct node *p1 = createNode(1);
    struct node *p3 = createNode(5);
    struct node *p4 = createNode(8);
    struct node *p2 = createNode(4);

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left=p3;
    p1->right=p4;
inorder(p);

    return 0;
}