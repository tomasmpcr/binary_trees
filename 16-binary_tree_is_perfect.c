#include "binary_trees.h"

void loop_trough_height(const binary_tree_t *node, int *num, int level);
void loop_trough_size(const binary_tree_t *node, int *num);

/**
 * binary_tree_is_perfect - Checks if a tree is perfect
 * @tree: Tree to evaluate
 * ------------------------------------
 * Return: 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height_left = 0;
	int height_right = 0;

	int size_left = 0;
	int size_right = 0;

	if (!tree)
		return (0);

	loop_trough_height(tree->left, &height_left, 1);
	loop_trough_height(tree->right, &height_right, 1);

	loop_trough_size(tree->left, &size_left);
	loop_trough_size(tree->right, &size_right);

	if (height_left == height_right)
		if (size_left == size_right)
			return (1);
		else
			return (0);
	else
		return (0);
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
 * loop_trough_size - Calculates the level of the tree
 * @node: Tree to calculate
 * @num: pointer for recursive
 * ------------------------------------
 */
void loop_trough_size(const binary_tree_t *node, int *num)
{
	if (!node)
		return;

	if (node->left)
		loop_trough_size(node->left, num);

	if (node->right)
		loop_trough_size(node->right, num);

	*num = *num + 1;
}
