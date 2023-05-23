
//build Binary Tree Using Inorder and PreOrder
#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

void printInorder(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    printInorder(root->left);
    printf("%d ", root->data);
    printInorder(root->right);
}

struct TreeNode* buildTree(int in[], int pre[], int inStart, int inEnd, int preStart, int preEnd) {
    if (inStart > inEnd) {
        return NULL;
    }
    int rootIndex = pre[preStart];
    int LevelIndex;
    int i;
    for (i = inStart; i <= inEnd; i++) {
        if (in[i] == rootIndex) {
            LevelIndex = i;
            break;
        }
    }
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->data = rootIndex;
    root->left = buildTree(in, pre, inStart, LevelIndex - 1, preStart + 1, preStart + (LevelIndex - inStart));
    root->right = buildTree(in, pre, LevelIndex + 1, inEnd, preStart + (LevelIndex - inStart) + 1, preEnd);

    return root;
}

int main() {
    int in[] = {2, 5, 4, 1, 6, 3, 8, 7};
    int pre[] = {1, 2, 4, 5, 3, 6, 7, 8};

    int size = sizeof(in) / sizeof(in[0]);
    int instart = 0, inend = size - 1, prestart = 0, preend = size - 1;
    struct TreeNode* root = buildTree(in, pre, instart, inend, prestart, preend);
    printInorder(root);
    printf("\n");

    return 0;
}

