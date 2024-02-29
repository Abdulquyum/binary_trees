#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts to the left of the tree
 *
 * @parent: pointer to the parent of the tree
 * @value: value to insert in the node
 *
 * Return: new node inserted
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);

	if (newNode == NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}

	parent->left = newNode;

	return (newNode);
}
