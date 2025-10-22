#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point for testing binary_tree_node
 *
 * Return: 0 on success, 1 on failure
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    if (root == NULL)
    {
        printf("Failed to create root node\n");
        return (1);
    }

    printf("Root node created with value: %d\n", root->n);
    printf("Parent pointer of root: %p\n", (void *)root->parent);

    return (0);
}
