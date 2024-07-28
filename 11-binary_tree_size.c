#include "binary_trees.h"

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
