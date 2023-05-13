//LevelOrder Tree Treaversal

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

struct Treenode {
	
	int data;
	struct Treenode* left;
	struct Treenode* right;
};

struct Queue {
	
	struct Treenode* btNode;
	struct Queue* next;
};

struct Queue *front = NULL;
struct Queue *rear = NULL;

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

bool isEmpty() {

	if(front == NULL && rear == NULL) {
		return true;
	}else {
		return false;
	}
}

void enqueue(struct Treenode* temp) {
	
	struct Queue *newnode = (struct Queue*)malloc(sizeof(struct Queue));
	newnode->btNode = temp;
	newnode->next = NULL;

	if(isEmpty()) {
		front = newnode;
		rear = newnode;
	}else {
		rear->next = newnode;
		rear = newnode;
	}
}

struct Treenode *dequeue() {
	if(isEmpty()) {
		printf("Tree queue is Empty\n");
	}else {
		struct Queue *temp = front;
		struct Treenode *item = temp->btNode;

		if(front==rear) {
			front = rear = NULL;
		}else {
			front = front->next;
		}
		free(temp);
		return item;
	}
}
void levelOrder(struct Treenode* root) {
	
	struct Treenode *temp = root;
	enqueue(root);
	while(!isEmpty()) {
		temp = dequeue();
		printf("%d ",temp->data);
		if(temp -> left!= NULL) {
			enqueue(temp->left);
		}if(temp->right!=NULL) {
			enqueue(temp->right);
		}
	}		
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

        printf("\n");
	levelOrder(root);
	printf("\n");
}

