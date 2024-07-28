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
 * binary_tree_size - Measures the size of binary tree
 * @tree: Pointer to the root node of the tree
 * Return: The size or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_l, size_r;

	if (!tree)
		return (0);

	size_l = binary_tree_size(tree->left);
	size_r = binary_tree_size(tree->right);
	return (size_l + size_r + 1);
}

/**
 * _pow - returns the value of x
 *	raised to the power of y
 * @x: the integer
 * @y: the power
 * Return: the value of x^y
 */
size_t _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow(x, y + -1));
}

/**
 * binary_tree_is_perfect - Checks if binary tree is perfect
 * @tree: Pointer to the root node of the tree
 * Return: 1 if perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, nodes, all;

	if (!tree)
		return (0);
	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);
	all = _pow(2, height + 1) - 1;

	if (all == nodes)
		return (1);
	return (0);
}
