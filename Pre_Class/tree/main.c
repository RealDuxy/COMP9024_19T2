//
// Created by YUJiehu on 2019-05-29.
//
#include "tree.h"

int main() {


    BinaryTree  binaryTree = createBinaryTree();

    insertBinaryTree(binaryTree,10);

    insertBinaryTree(binaryTree,2);
    insertBinaryTree(binaryTree,15);

    insertBinaryTree(binaryTree,30);

    printTree(binaryTree);

    int height = heightTree(binaryTree);

    printf(" tree height is : %d",height);

}