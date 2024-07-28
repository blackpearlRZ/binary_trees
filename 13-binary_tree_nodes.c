#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of nodes with
 *	atleast one child
 * @tree: Pointer to the root node of the tree
 * Return: The number of nodes or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		nodes = 1;

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
