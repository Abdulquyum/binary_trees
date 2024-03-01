#include "binary_trees.h"

/**
 * int binary_tree_is_root - checks if node is root
 *
 * @node: node to be checked
 *
 * Return: 1 if node is a root, otherwise 0 if node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent)
		return (0);

	return (1);
}
