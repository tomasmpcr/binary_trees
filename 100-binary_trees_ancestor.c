#include "binary_trees.h"

size_t binary_tree_depth_ad(const binary_tree_t *tree);

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{

	if (!first || !second)
		return (NULL);

	binary_tree_t *aux_first = (binary_tree_t *)first;
	binary_tree_t *aux_second = (binary_tree_t *)second;

	int first_d = binary_tree_depth_ad(first);
	int second_d = binary_tree_depth_ad(second);

	for (; first_d != second_d;)
	{
		if (first_d > second_d)
		{
			aux_first = aux_first->parent;
			first_d--;
		}
		else
		{
			aux_second = aux_second->parent;
			second_d--;
		}
	}

	for (; aux_first != aux_second;)
	{
		aux_first = aux_first->parent;
		aux_second = aux_second->parent;
	}

	return (aux_first);
}

/**
 * binary_tree_depth - Calc the dept of a node
 * @tree: Tree to go through
 * ------------------------------------
 * Return: the dept
 */
size_t binary_tree_depth_ad(const binary_tree_t *tree)
{
	int i;
	binary_tree_t *aux = (binary_tree_t *)tree;

	if (!tree)
		return (0);

	for (i = 0; aux->parent; i++)
		aux = aux->parent;

	return (i);
}
