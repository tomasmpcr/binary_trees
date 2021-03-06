#include "binary_trees.h"

void loop_trough_height(const binary_tree_t *node, int *num, int level);

/**
 * binary_tree_balance - Counts the childs of a binary tree
 * @tree: Tree to evaluate
 * ------------------------------------
 * Return: Number the childs of a node
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0;
	int height_right = 0;

	if (!tree)
		return (0);

	loop_trough_height(tree->left, &height_left, 1);
	loop_trough_height(tree->right, &height_right, 1);

	return (height_left - height_right);
}

/**
 * loop_trough_height - Calculates the level of the tree
 * @node: Tree to calculate
 * @num: pointer for recursive
 * @level: level of the tree
 * ------------------------------------
 */
void loop_trough_height(const binary_tree_t *node, int *num, int level)
{
	if (!node)
		return;

	if (node->left)
		loop_trough_height(node->left, num, level + 1);

	if (node->right)
		loop_trough_height(node->right, num, level + 1);

	if ((*num) < level)
		*num = level;
}
