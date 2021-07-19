#include "binary_trees.h"

void loop_trough(const binary_tree_t *node, int *num);

/**
 * binary_tree_nodes - Counts the childs of a binary tree
 * @tree: Tree to evaluate
 * ------------------------------------
 * Return: Number the childs of a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int childs = 0;

	loop_trough(tree, &childs);

	return (childs);
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

	if (node->left || node->right)
		*num = *num + 1;
}
