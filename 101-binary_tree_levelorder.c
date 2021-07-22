#include "binary_trees.h"

void loop_trough_height(const binary_tree_t *node, int *num, int level);
void loop_trough_level(
	const binary_tree_t *node,
	int level_print, int level,
	void (*func)(int));

/**
 * binary_tree_levelorder - goes through a binary tree using level-order traver
 * @tree: Tree to calculate
 * @func: func to call
 * ------------------------------------
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height = 0, i;

	if (!tree || !func)
		return;

	loop_trough_height(tree, &height, 0);

	for (i = 0; i <= height; i++)
	{
		loop_trough_level(tree, i, 0, func);
	}
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

/**
 * loop_trough_level - Calculates the level of the tree
 * @node: Tree to calculate
 * @level_print: level that indicates when to print
 * @level: level of the tree
 * @func: func to call
 * ------------------------------------
 */
void loop_trough_level(
	const binary_tree_t *node,
	int level_print, int level,
	void (*func)(int))
{
	if (!node || level > level_print)
		return;

	if (node->left)
		loop_trough_level(node->left, level_print, level + 1, func);

	if (node->right)
		loop_trough_level(node->right, level_print, level + 1, func);

	if (level_print == level)
		func(node->n);
}
