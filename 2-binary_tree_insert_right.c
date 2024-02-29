#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts to the right of the tree
 *
 * @parent: pointer to the parent of the tree
 * @value: value to insert in the node
 *
 * Return: new node inserted
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);

	if (newNode == NULL)
		return (NULL);

	newNode->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = newNode;

	parent->right = newNode;

	return (newNode);
}
