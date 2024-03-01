#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is leaf
 *
 * @node: node to be checked
 *
 * Return: 1 if node is NULL, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left || node->right)
		return (0);

	return (1);
}
