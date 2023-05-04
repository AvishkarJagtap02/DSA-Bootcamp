#include<stdio.h>
#include<stdlib.h>

struct Treenode {
	int data;
	struct Treenode *left;
	struct Treenode *right;
};

void inorder(struct Treenode* root) {
	
	if(root == NULL) {
		return;
	}
	
	inorder(root->left);
	printf("%d ", root->data);
	inorder(root->right);	

}
void postorder(struct Treenode* root) {
	
	if(root == NULL) {
		return;
	}
	
	postorder(root->left);
	postorder(root->right);	
	printf("%d ", root->data);

}
void preorder(struct Treenode* root) {
	
	if(root == NULL) {
		return;
	}
	
	printf("%d ", root->data);
	preorder(root->left);
	preorder(root->right);	
}

int sizeOfBT(struct Treenode *root) {
	
	if(root == NULL) {
		return 0;
	}

	int leftSize = sizeOfBT(root->left);
	int rightSize = sizeOfBT(root->right);

	return leftSize + rightSize + 1;  
}
int sumOfBT(struct Treenode *root) {
	
	if(root == NULL) {
		return 0;
	}

	int leftSum = sumOfBT(root->left);
	int rightSum = sumOfBT(root->right);

	return leftSum + rightSum + root->data;  
}
int max(int lh, int rh) {
	
	if(lh<rh) {
		return rh;
	}else {
		return lh;
	}
}
int heightOfBT(struct Treenode* root) {

	if(root == NULL) {
		return -1;
	}

	int lh = heightOfBT(root->left);
	int rh = heightOfBT(root->right);

	return  max(lh,rh) + 1;  
}
void printTree(struct Treenode *root) {

	char ch;
	do {
		int choice;
		printf("\n====================================================================\nWhat Do you Want to Print..\n 1.Preorder\n 2.Inorder\n 3.Postorder\n 4.Size of Tree(CountNodeofBT)\n 5. Sum of BT\n 6. height of binary tree\n");
		printf("\n=====================================================================\n");
		printf("Enter Choice\n");
		scanf("%d",&choice);
		switch(choice) {
			
			case 1:
				preorder(root);
				break;
			case 2:
				inorder(root);
				break;
			case 3:
			        postorder(root);
				break;	
			case 4:
				{
			        int size = sizeOfBT(root);
				printf("Size of Binary Tree is : %d\n",size);
				break;	
				}
			case 5:
				{
			        int sum = sumOfBT(root);
				printf("Sum of Binary Tree is %d\n",sum);
				break;	
				}
			case 6:
				{
			        int height = heightOfBT(root);
				printf("height of Binary Tree is : %d\n",height);
				break;
				}	
			default:
				printf("Invalid !!!\n");
				break;
		}
		printf("\nDo you Want to Continue? \n");
		getchar();
		scanf("%c",&ch);
	}while(ch == 'Y' || ch == 'y');
	
}
struct Treenode *createNode(int level) {
	
	level = level + 1;
	struct Treenode* newnode = (struct Treenode*)malloc(sizeof(struct Treenode));
	char ch;
	printf("Enter Data For newNode  at level %d\n",level);
	scanf("%d",&(newnode->data));

	printf("Do you want to enter left node at level %d\n",level);
	getchar();
	scanf("%c",&ch);

	
	if(ch == 'Y' || ch == 'y') {
		newnode->left = createNode(level);	
	}else {
		newnode->left = NULL;
	}
	
	printf("Do you want to enter right node at level %d\n",level);
	getchar();
	scanf("%c",&ch);
	
	if(ch == 'Y' || ch == 'y') {
		newnode->right = createNode(level);	
	}else {
		newnode->right = NULL;
	}
	return newnode;
}
void main() {
	char ch;
	
	printf("Creating Binary Tree....\n");
	
	struct Treenode *root = (struct Treenode*)malloc(sizeof(struct Treenode));
	printf("Enter Data For Root Node at level 0\n");
	scanf("%d",&(root->data));

	int level=0;
	printf("Do you want to enter left node at level1\n");
	getchar();
	scanf("%c",&ch);
	if(ch == 'Y' || ch == 'y') {
		root->left = createNode(level);	
	}else {
		root->left = NULL;
	}
	
	printf("Do you want to enter right node at level1\n");
	getchar();
	scanf("%c",&ch);

	if(ch == 'Y' || ch == 'y') {
		root->right = createNode(level);	
	}else {
		root->right = NULL;
	}

	printTree(root);
	printf("\n");
}
