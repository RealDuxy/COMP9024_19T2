//
// Created by YUJiehu on 2019-05-29.
//

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef COMP9024_19T2_TREE_H
#define COMP9024_19T2_TREE_H

#endif //COMP9024_19T2_TREE_H


typedef struct Node *TreeNode;

typedef struct Tree *BinaryTree;


BinaryTree createBinaryTree();

void insertBinaryTree(BinaryTree tree, int data);

void printTree(BinaryTree tree);


int heightTree(BinaryTree tree);
