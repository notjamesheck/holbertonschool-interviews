#include "binary_trees.h"

/**
* binary_tree_insert_left - creates a binary tree node
* @parent: node to be created
* @value: value of new node
* Return: a pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
	{
		return (NULL); }

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		return (NULL); }

	node->n = value;
	node->left = NULL;
	node->right = NULL;

	if (parent->left == NULL)
	{
		node->parent = parent;
		parent->left = node;
	}
	else
	{
		node->left = parent->left;
		parent->left->parent = node;
		node->parent = parent;
		parent->left = node;
	}
	return (node);
}
