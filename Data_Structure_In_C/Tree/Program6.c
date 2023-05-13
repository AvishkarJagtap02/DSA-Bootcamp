// Program to Build A Tree from Inorder and Preorder

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Treenode {
	int data;
	struct Treenode *left;
	struct Treenode *right;
};

struct Treenode* createNode(int data) {
	struct Treenode* newnode = (struct Treenode*)malloc(sizeof(struct Treenode));
	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}

int SearchIn(int in[], int start, int end, int temp) {
	for(int i=start;i<=end;i++) {
		if(in[i] == temp) {
			return i;
		}
	}
	return -1;
}

struct Treenode* buildTree(int in[], int pre[], int start,int end) {
	if (start > end) {
		return NULL;
	}

	static int index = 0; 
	int temp = pre[index];
	index++;
	struct Treenode* newnode = (struct Treenode*)malloc(sizeof(struct Treenode));
	newnode-> data = temp;
	if(start==end) {
		return newnode;
	}
	int pos = SearchIn(in,start,end,temp);
	newnode->left = buildTree(in, pre, start, pos-1);
	newnode->right = buildTree(in, pre, pos+1, end);
	return newnode;
}

void printInorder(struct Treenode* root) {
	if(root == NULL) {
		return;
	}
	printInorder(root->left);
	printf("%d ",root->data);
	printInorder(root->right);
}

void main() {

	int in[] = {2,5,4,1,6,3,8,7};
	int pre[] = {1,2,4,5,3,6,7,8};			
	int rootIndex ;
	int size = sizeof(in)/sizeof(in[0]);

	struct Treenode* root = buildTree(in,pre,0,size-1);
	printInorder(root);
	printf("\n");
}
