#include "binary_trees.h"

/**
 * binary_tree_is_leaf -
 *
 * Return: 
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (!node->left && !node->right);
}
