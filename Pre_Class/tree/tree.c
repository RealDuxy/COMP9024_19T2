//
// Created by YUJiehu on 2019-05-29.
//

#include "tree.h"

struct Node {
    struct Node *left;
    struct Node *right;
    int data;
};

struct Tree {
    TreeNode root;
    int numberOfNodes;
};

TreeNode createTreeNode(int data) {
    TreeNode newTreeNode = malloc(sizeof(struct Node));
    if (newTreeNode != NULL) {
        newTreeNode->right = NULL;
        newTreeNode->left = NULL;
        newTreeNode->data = data;
    }

    return newTreeNode;
}

BinaryTree createBinaryTree() {
    BinaryTree binaryTree = malloc(sizeof(struct Tree));

    if (binaryTree != NULL) {
        binaryTree->root = NULL;
        binaryTree->numberOfNodes = 0;
    }

    return binaryTree;
}




TreeNode insertTreeNode(TreeNode treeNode, int data) {

    if (treeNode == NULL) {
        treeNode = createTreeNode(data);
    } else {
        if (data > treeNode->data) {

            treeNode->right = insertTreeNode(treeNode->right, data);

        } else if (data < treeNode->data) {

            treeNode->left = insertTreeNode(treeNode->left, data);

        } else {

            return treeNode;
        }
    }
    return treeNode;
}

void insertBinaryTree(BinaryTree tree, int data) {

    if (tree != NULL) {

        // crate new node
        TreeNode newTreeNode = createTreeNode(data);
        // bind
        if (tree->root == NULL) {
            tree->root = newTreeNode;
            tree->numberOfNodes ++;
        } else {
            tree->root = insertTreeNode(tree->root,data);
            tree->numberOfNodes ++;
        }

    }
}

void printPreTreeNode(TreeNode treeNode) {

    if(treeNode!=NULL) {
        printf("%d \n",treeNode->data);
        printPreTreeNode(treeNode->left);
        printPreTreeNode(treeNode->right);
    }
}

void printMidTreeNode(TreeNode treeNode) {

    if(treeNode!=NULL) {
        printMidTreeNode(treeNode->left);
        printf("%d \n",treeNode->data);
        printMidTreeNode(treeNode->right);
    }
}

void printPostTreeNode(TreeNode treeNode) {

    if(treeNode!=NULL) {
        printPostTreeNode(treeNode->left);
        printPostTreeNode(treeNode->right);
        printf("%d \n",treeNode->data);
    }
}

void printTree(BinaryTree tree) {
    if (tree == NULL || tree->numberOfNodes ==0) {
        printf("empty tree");
    } else {
        printf("tree nodes number is : %d \n",tree->numberOfNodes);
        printf("all the nodes:");
        printPostTreeNode(tree->root);
    }
}


int heightTreeNode(TreeNode treeNode) {

    if (treeNode == NULL) {
        return 0;
    }else {

        int leftHeight = heightTreeNode(treeNode->left);
        int rightHeight = heightTreeNode(treeNode->right);
        if (leftHeight >= rightHeight) {
            return leftHeight + 1;
        }else {
            return rightHeight + 1;
        }
    }

}


int heightTree(BinaryTree tree) {

    if (tree == NULL || tree->root == NULL) {
        return 0;
    }else {
        return heightTreeNode(tree->root);
    }
}



