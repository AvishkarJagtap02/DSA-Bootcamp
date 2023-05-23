

//build Binary Tree using Inorder and PostOrder
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

struct TreeNode* buildTree(int in[], int post[], int inStart, int inEnd, int postStart, int postEnd) {
    if (inStart > inEnd) {
        return NULL;
    }
    int rootIndex = post[postEnd];
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
    root->left = buildTree(in, post, inStart, LevelIndex - 1, postStart - 1, postStart + (LevelIndex - inStart));
    root->right = buildTree(in, post, LevelIndex + 1, inEnd, postStart + (LevelIndex - inStart) + 1, postEnd);

    return root;
}

int main() {
    int in[] = {2, 5, 4, 1, 6, 3, 8, 7};
    int post[] = {5, 4, 2, 6, 8, 7, 3, 1};

    int size = sizeof(in) / sizeof(in[0]);
    int instart = 0, inend = size - 1, poststart = 0, postend = size - 1;
    struct TreeNode* root = buildTree(in, post, instart, inend, poststart, postend);
    printInorder(root);
    printf("\n");

    return 0;
}

