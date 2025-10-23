#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

int main(void)
{
	binary_tree_t *root;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);

	printf("Created root: %d\n", root->n);
	printf("Left child: %d\n", root->left->n);
	printf("Right child: %d\n", root->right->n);

	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);

	printf("\nAfter inserting right nodes:\n");
	printf("Root right: %d\n", root->right->n);
	printf("Root right->right: %d\n", root->right->right->n);
	printf("Left right: %d\n", root->left->right->n);

	return (0);
}
