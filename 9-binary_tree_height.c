#include "binary_trees.h"

int max(int x, int y);

/**
 * binary_tree_height - a function that measures the height of a
 * binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height += 1 + binary_tree_height(tree->left);

	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;


	if (left_height > right_height)
		return (left_height);

	else
		return (right_height);
}
