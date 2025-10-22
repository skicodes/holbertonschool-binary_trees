#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root, *left_new, *right_new;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);

    right_new = binary_tree_insert_left(root->right, 128);
    left_new = binary_tree_insert_left(root, 54);

    /* Use the variables */
    printf("New left node of root->right: %d\n", right_new->n);
    printf("New left node of root: %d\n", left_new->n);

    printf("Root: %d\n", root->n);
    printf("Left child: %d\n", root->left->n);
    printf("Left->left: %d\n", root->left->left->n);
    printf("Right child: %d\n", root->right->n);
    printf("Right->left: %d\n", root->right->left->n);

    return (0);
}
