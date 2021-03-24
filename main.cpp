#include <stdio.h>
#include <stdlib.h>

//#include "StackArray/StackArr.c"
//#include "QueueArray/QueueArr.c"
//#include "StackList/StackList.c"
//#include "QueueList/QueueList.c"
//#include "SingleLinkedList/LinkedList.c"
#include "BinarySearchTree/BinarySearchTree.c"

int main() {
    TreeNode *root =NULL;
    //TreeNode *temp =NULL;

    printf("Inserting");

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    root = search(root, 50);
    printf("\nIs 50 in the tree? %d\n", root->data);

    root = minimum_value_node(root);
    printf("\nThe minimum value is: %d\n", root->data);

    printf("\nIn-order traversal of the given tree\n");
    in_order(root);

    printf("\nPost-order traversal of the tree\n");
    post_order(root);

    printf("\nPre-order traversal of the tree\n");
    pre_order(root);

    printf("\nDelete 20\n");
    root = delete_node(root, 20);
    printf("\nIn-order traversal of the modified tree\n");
    in_order(root);

    printf("\nDelete 30\n");
    root = delete_node(root, 30);

    printf("\nIn-order traversal of the modified tree\n");
    in_order(root);

    printf("\nDelete 50\n");
    root = delete_node(root, 50);

    printf("\nIn-order traversal of the modified tree\n");
    in_order(root);

    return 0;
}
