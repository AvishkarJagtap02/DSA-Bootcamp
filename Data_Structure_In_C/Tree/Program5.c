// Program to Build A Tree from Inorder and Preorder

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Treenode {
	int data;
	struct Treenode *left;
	struct Treenode *right;
};

bool SearchIn(int in[] , int a , int b , int size) {
	int tmp1 ,tmp2;
	for(int i = 0; i<size; i++) {
		if(in[i] == a)
			tmp1 = i;
		if(in[i] == b) 
		       tmp2 = i;
	}
	if(tmp1<tmp2) {
		return true;
	}else {
		return false;
	}		
}	
/*
struct Treenode* createNode(int data) {
	struct Treenode* newnode = (struct Treenode*)malloc(sizeof(struct Treenode));
	newnode->left = NULL;
        newnode->right = NULL;
	return newnode;	
}*/
void buildTree(int size ,int in[] , int pre[], int rootIndex , struct Treenode* root,int start,int end) {
	

	 struct Treenode* temp1 = root; 
	 for(int i=1;i<size;i++) {
		bool flg = SearchIn(in,pre[i],pre[i-1],size);
		if(flg) {
			printf("%d is left side of %d\n",pre[i],pre[i-1]);
		//	struct Treenode* temp2 = createNode(pre[i]);
		//	temp1->left = temp2;
		//	temp1 = temp2;
		}else {
			if(i == rootIndex+1) {
				printf("%d is right side of %d\n",pre[i],root->data);
		//		struct Treenode* temp2 = createNode(pre[i]);
		//		root->right = temp2;
		//		temp1 = temp2;
			}else {
				printf("%d is right side of %d\n",pre[i],pre[i-1]);
			//	struct Treenode* temp2 = createNode(pre[i]);
			//	temp1->right = temp2;
			//	temp1 = temp2;
			}
		}
	 }
}
void main() {

	int in[] = {2,5,4,1,6,3,8,7};
	int pre[] = {1,2,4,5,3,6,7,8};			
	int rootIndex;
	for(int i=0;i<8;i++) {
		if(in[i] == pre[0]) {
			rootIndex = i;
		}
	}
	int size = sizeof(in)/sizeof(in[0]);
	
	struct Treenode* root = (struct Treenode*)malloc(sizeof(struct Treenode));
	root->data = in[rootIndex];
	root->left = NULL;
	root->right = NULL;

	buildTree(size,in,pre,rootIndex,root,0,size-1);
}
