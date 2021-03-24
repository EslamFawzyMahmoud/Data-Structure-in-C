//
// Created by we on 3/24/2021.
//

#ifndef DATASTRUCTURE_BINARYSEARCHTREE_H
#define DATASTRUCTURE_BINARYSEARCHTREE_H

#include <stdio.h>
#include <stdlib.h>

typedef int Tree_Entry;

struct TreeNode{
    int data;
    struct TreeNode *right;
    struct TreeNode *left;
};

struct TreeNode *insert(TreeNode *, Tree_Entry);

struct TreeNode *new_node(Tree_Entry);

struct TreeNode *search(TreeNode *, Tree_Entry);

void pre_order(TreeNode *);

void in_order(TreeNode *);

void post_order(TreeNode *);

struct TreeNode *minimum_value_node(TreeNode *);

struct TreeNode *delete_node(TreeNode *,Tree_Entry );

#endif //DATASTRUCTURE_BINARYSEARCHTREE_H