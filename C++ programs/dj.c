#include<stdio.h>
 
 struct node{
 	int val;
 	struct node *left,*right;
 	
 };
 struct node *newnode(int item){
 	struct node *temp=(struct node*)malloc(sizeof(struct node));
 	temp->data=item;
 	temp->left=temp->right=NULL;
 	return temp;
 }
	
void  inorder(struct node *root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d",root->val);
		inorder(root->right);
	}
}
struct node
