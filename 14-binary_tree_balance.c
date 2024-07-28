#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of binary tree
 * @tree: Pointer to the root node of the tree to measure
 * Return: The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_h, r_h;

	if (tree == NULL || (!tree->left && !tree->right))
		return (0);

	l_h = binary_tree_height(tree->left);
	r_h = binary_tree_height(tree->right);

	if (l_h > r_h)
		return (l_h + 1);
	return (r_h + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a
 *	binary tree
 * @tree: Pointer to the root node of the tree
 * Return: The balance factor or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_h = -1, r_h = -1;

	if (!tree)
		return (0);

	if (tree->left)
		l_h = binary_tree_height(tree->left);
	if (tree->right)
		r_h = binary_tree_height(tree->right);

	return (l_h - r_h);
}
