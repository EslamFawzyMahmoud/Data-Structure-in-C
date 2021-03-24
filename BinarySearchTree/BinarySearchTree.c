//
// Created by we on 3/24/2021.
//

#include "BinarySearchTree.h"

struct TreeNode *new_node(Tree_Entry key){
    struct TreeNode *temp_node=(struct TreeNode *)malloc(sizeof (struct TreeNode));
    temp_node->data=key;
    temp_node->right=NULL;
    temp_node->left=NULL;
    return temp_node;
}

struct TreeNode *insert(struct TreeNode *node, Tree_Entry key){
    if(node == NULL)
        return new_node(key);

    else if(node->data > key)
        insert(node->left,key);

    else
        insert(node->right,key);
}

struct TreeNode *search(struct TreeNode *node, Tree_Entry key){
    if(node == NULL || key == node->data)
        return node;
    else if (node->data > key)
        search(node->left,key);
    else
        search(node->right,key);
}

void pre_order(struct TreeNode *node){
    if(node == NULL)
        return;
    printf("%d ",node->data);
    pre_order(node->left);
    pre_order(node->right);
}

void in_order(struct TreeNode *node){
    if(node != NULL){
        in_order(node->left);
        printf("%d ",node->data);
        in_order(node->right);
    }
}

void post_order(struct TreeNode *node){
    if(node == NULL)
        return;
    post_order(node->left);
    post_order(node->right);
    printf("%d ",node->data);
}

struct TreeNode *minimum_value_node(struct TreeNode *node){
    struct TreeNode *cur=node;
    while (cur && cur->left != NULL)
        cur=cur->left;
    return cur;
}

struct TreeNode *delete_node(struct TreeNode *node,Tree_Entry key){
    if (node == NULL)
        return node;

    if (node->data > key ) {
        delete_node(node->left, key);
        return node;
    }
    else {
        delete_node(node->right, key);
        return node;
    }
    if(node->left == NULL ){
        struct TreeNode *temp = node->right;
        delete node;
        return temp;
    }
    else if(node->right == NULL ){
        struct TreeNode *temp = node->left;
        delete node;
        return temp;
    }
    else{
        struct TreeNode *successor_parent = node->right;
        struct TreeNode *successor = node->right;
        while (successor->left != NULL) {
            successor_parent = successor;
            successor = successor->left;
        }
        successor_parent->left = successor->right;
        node->data = successor->data;
        delete successor;
        return node;
    }
}
