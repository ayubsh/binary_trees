#include "binary_trees.h"

/**
* binary_tree_is_leaf - checks weather node is leaf
* @node: is a pointer to the node to check
* Return: return 1 if node is a leaf, otherwise 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node->left && !node->right && node)
		return (1);

	return (0);
}
