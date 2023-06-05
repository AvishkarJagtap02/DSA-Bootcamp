// Construct Binary Tree using Inorder and Postoder Traversal
#include<stdio.h>
#include<stdlib.h>
struct TreeNode { 
	int data;
	struct TreeNode* left;
	struct TreeNode* right;
};
void printInorder(struct TreeNode* root) {
	if(root == NULL) {
		return ;
	}
	printInorder(root->left);
	printf("%d ",root->data);
	printInorder(root->right);
}
void printPreorder(struct TreeNode* root) {
	if(root == NULL) {
		return;
	}
	printf("%d ",root->data);
	printPreorder(root->left);
	//printf("%d ",root->data);
	printPreorder(root->right);
}
void printPostorder(struct TreeNode* root) {
	if(root == NULL) {
		return ;
	}
	printPostorder(root->left);
	//printf("%d ",root->data);
	printPostorder(root->right);
	printf("%d ",root->data);
}
struct TreeNode* constructBT(int in[], int post[], int inStart,int inEnd,int postStart,int postEnd) {
	if(inStart>inEnd) {
		return NULL;
	}
	int rootData = post[postEnd];
	struct TreeNode* temp = (struct TreeNode*)malloc(sizeof(struct TreeNode));
	temp->data = rootData; 
	int i;
	for(i=inStart;i<=inEnd;i++) {
		if(in[i] == rootData) {
			break;
		}
	}
	int lLength = i - inStart;
	temp->left = constructBT(in,post,inStart, i-1,postStart,postStart+lLength-1);
	temp->right = constructBT(in,post,i+1,inEnd,postStart+lLength,postEnd-1);
	return temp;
}
void main() {

	int in[] = {4 ,2 ,5 ,1 ,6 ,7 ,3};
	int post[] = {4 ,5 ,2 ,7 ,6 ,3 ,1};
	int size = sizeof(in)/sizeof(in[0]);
	int instart=0 , inEnd = size-1, postStart = 0, postEnd = size-1;
	struct TreeNode* root = constructBT(in,post,instart,inEnd,postStart,postEnd);
	printf("Inorder: ");
	printInorder(root);
	printf("\n Preorder: ");
	printPreorder(root);
	printf("\nPostOrder: ");
	printPostorder(root);
	printf("\n");
}

