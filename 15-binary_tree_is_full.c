#include "binary_trees.h"

void loop_trough_is_full(const binary_tree_t *node, int *ret);

/**
 * binary_tree_is_full - Counts the childs of a binary tree
 * @tree: Tree to evaluate
 * ------------------------------------
 * Return: Number the childs of a node
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int ret = 1;

	if (!tree)
		return (0);

	loop_trough_is_full(tree, &ret);

	return (ret);
}

/**
 * loop_trough_is_full - Calculates the level of the tree
 * @node: Tree to calculate
 * @ret: pointer for recursive
 * ------------------------------------
 */
void loop_trough_is_full(const binary_tree_t *node, int *ret)
{
	int num = 0;

	if (!node || (*ret) == 0)
		return;

	if (node->left)
	{
		loop_trough_is_full(node->left, ret);
		num = num + 1;
	}

	if (node->right)
	{
		loop_trough_is_full(node->right, ret);
		num = num + 1;
	}

	if (num == 1)
		*ret = 0;
}
