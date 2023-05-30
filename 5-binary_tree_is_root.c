#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a node in a binary tree is a root node
 *
 * @node: node to be checked
 *
 * Return: 1 if a node is a root node ; 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
