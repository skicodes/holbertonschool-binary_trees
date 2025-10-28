#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 * @parent: A pointer to the node to insert the right child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

    if (!parent)
        return (NULL);

    node = malloc(sizeof(binary_tree_t));
    if (!node)
        return (NULL);

    node->n = value;
    node->parent = parent;
    node->left = NULL;
    node->right = parent->right;

    if (parent->right)
        parent->right->parent = node;

    parent->right = node;

    return (node);
}
