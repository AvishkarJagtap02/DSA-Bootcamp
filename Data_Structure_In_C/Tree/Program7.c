// Construct Binary Tree using Inorder and Preorder Traversal
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
struct TreeNode* constructBT(int in[], int pre[], int inStart,int inEnd,int preStart,int preEnd) {
	if(inStart>inEnd) {
		return NULL;
	}
	int rootData = pre[preStart];
	struct TreeNode* temp = (struct TreeNode*)malloc(sizeof(struct TreeNode));
	temp->data = rootData; 
	int i;
	for(i=inStart;i<=inEnd;i++) {
		if(in[i] == rootData) {
			break;
		}
	}
	int lLength = i - inStart;
	temp->left = constructBT(in,pre,inStart, i-1,preStart+1,preStart+lLength);
	temp->right = constructBT(in,pre,i+1,inEnd,preStart+lLength+1,preEnd);
	return temp;
}
void main() {
	
	int in[] = {4,2,5,1,6,7,3};
	int pre[] = {1,2,4,5,3,6,7};
	int size = sizeof(in)/sizeof(in[0]);
	int instart=0 , inEnd = size-1, preStart = 0, preEnd = size-1;
	struct TreeNode* root = constructBT(in,pre,instart,inEnd,preStart,preEnd);
	printf("Inorder: ");
	printInorder(root);
	printf("\n Preorder: ");
	printPreorder(root);
	printf("\nPostOrder: ");
	printPostorder(root);
	printf("\n");

}

