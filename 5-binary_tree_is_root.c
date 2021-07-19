#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: Node to check
 * ------------------------------------
 * Return: 1 if leaf, 0 if not or NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);
	else
		return (0);
}
