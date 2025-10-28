#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_print - Prints a binary tree
 * @tree: A pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
    if (tree)
    {
        printf("  .-------(%03d)--.\n", tree->n);
        if (tree->left)
            binary_tree_print(tree->left);
        if (tree->right)
            binary_tree_print(tree->right);
    }
}
