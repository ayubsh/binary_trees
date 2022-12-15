#include "binary_trees.h"

/**
* binary_tree_is_root - checks weather a node is root
* @node: is a pointer to the node to check
* Return: returns 1 if node is a root, otherwise 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);

	return (0);
}
