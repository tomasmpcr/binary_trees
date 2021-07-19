#include "binary_trees.h"

void loop_trough(const binary_tree_t *node, int *num, int level);

/**
 * binary_tree_height - Calc the height of the tree
 * @tree: Tree
 * ------------------------------------
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height = 0;

	loop_trough(tree, &height, 0);

	return (height);
}

/**
 * loop_trough - Calculates the level of the tree
 * @node: Tree to calculate
 * @num: pointer for recursive
 * @level: level of the tree
 * ------------------------------------
 */
void loop_trough(const binary_tree_t *node, int *num, int level)
{
	if (!node)
		return;

	if (node->left)
		loop_trough(node->left, num, level + 1);

	if (node->right)
		loop_trough(node->right, num, level + 1);

	if ((*num) < level)
		*num = level;
}
