//iterative way to print inorder by skipping useless root node traversing after visiting right node

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Treenode {
	int data;
	struct Treenode *left;
	struct Treenode *right;
};
struct StackFrame {
	
	struct Treenode *btNode;
	struct StackFrame *next;
};

struct StackFrame *top = NULL;

bool isEmpty() {
	if(top == NULL) {
		return true;
	}else {
		return false;
	}
}
void push(struct Treenode* temp) {
	
	struct StackFrame* newnode = (struct StackFrame*)malloc(sizeof(struct StackFrame));
	newnode->btNode = temp;
	newnode->next = top;
	top = newnode;

}        	

struct Treenode* pop() {
	if(isEmpty()) {
		return NULL;
	}
	struct Treenode* temp = top->btNode;
	struct StackFrame* item = top;
	top = top->next;
	free(item);
	return temp;
}
struct Treenode *createNode(int data) {
	
	struct Treenode* newnode = (struct Treenode*)malloc(sizeof(struct Treenode));
	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}
void iterativeInorder(struct Treenode* root) {
	if(root == NULL) {
		return;
	}
	struct StackFrame* stack = (struct StackFrame*)malloc(sizeof(struct StackFrame));
	struct Treenode* temp = root;

	while(!isEmpty() || temp!=NULL) {

		if(temp!=NULL) {
			push(temp);
			temp = temp->left;
		}else {
			temp =  pop(stack);
			printf("%d ",temp->data);
			temp = temp->right;
		}
	}
	free(stack);
}
void main() {

	struct Treenode* root = createNode(1);
	root->left = createNode(2);
	root->left->right = createNode(4);	
	root->left->right->left = createNode(5);
	root->left->right->right = createNode(7);
	root->left->right->right->left = createNode(8);
        
	root->right = createNode(3);
	root->right->left = createNode(10);
	root->right->right = createNode(9);
	root->right->right->left = createNode(11);

	iterativeInorder(root);
	printf("\n");
		
}	
		
