#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes
 * @tree: tree node
 * Return: # of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t x = 0;

	if (tree == NULL)
	{
		return (x);
	}
	if (tree->left || tree->right)
	{
		x += 1;
	}
	x += binary_tree_nodes(tree->left);
	x += binary_tree_nodes(tree->right);
	return (x);
}
/**
 * binary_tree_leaves - leaves
 * @tree: tree node
 * Return: leaf count
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t x = 0;

	if (tree == NULL)
	{
		return (x);
	}
	x += binary_tree_leaves(tree->left);
	x += binary_tree_leaves(tree->right);
	if (!tree->left && !tree->right)
	{
		return (x + 1);
	}
	return (x);
}
/**
 * binary_tree_is_full - balance factor
 * @tree: tree node
 * Return: balance factor
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int x = 0, y = 0;

	if (tree == NULL)
	{
		return (0);
	}

	x = (int)binary_tree_leaves(tree->left);
	y = (int)binary_tree_leaves(tree->right);
	return (x == y);
}
