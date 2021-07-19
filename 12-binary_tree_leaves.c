#include "binary_trees.h"

void loop_trough(const binary_tree_t *node, int *num);

/**
 * binary_tree_leaves - Counts the leaves of a binary tree
 * @tree: Tree to evaluate
 * ------------------------------------
 * Return: Number the leaves in a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves = 0;

	loop_trough(tree, &leaves);

	return (leaves);
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

	if (!node->left && !node->right)
		*num = *num + 1;
}
