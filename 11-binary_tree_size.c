#include "binary_trees.h"

void loop_trough(const binary_tree_t *node, int *num);

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: Tree to evaluate
 * ------------------------------------
 * Return: the size of a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size = 0;

	loop_trough(tree, &size);

	return (size);
}

/**
 * loop_trough - Calculates the level of the tree
 * @node: Tree to calculate
 * @num: pointer for recursive
 * ------------------------------------
 */
void loop_trough(const binary_tree_t *node, int *num)
{
	if (!node)
		return;

	if (node->left)
		loop_trough(node->left, num);

	if (node->right)
		loop_trough(node->right, num);

	*num = *num + 1;
}
