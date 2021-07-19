#include "binary_trees.h"

/**
 * binary_tree_depth - Calc the dept of a node
 * @tree: Tree to go through
 * ------------------------------------
 * Return: the dept
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int i;
	binary_tree_t *aux = (binary_tree_t *)tree;

	if (!tree)
		return (0);

	for (i = 0; aux->parent; i++)
		aux = aux->parent;

	return (i);
}
