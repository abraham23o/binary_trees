#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((binary_tree_is_full(tree) == 1) &&
		 (binary_tree_balance(tree) == 0))
		return (0);

	return (1);
}

#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the balance factor
 * of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: 0 - balanced, negative - rigt balanced, positive - left balanced
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}

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
		left_height = binary_tree_height(tree->left);

	if (tree->right)
		right_height = binary_tree_height(tree->right);


	if (left_height > right_height)
		return (left_height + 1);

	else
		return (right_height + 1);
}

#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 0 false, 1 true
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t left_full = 0, right_full = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_full = binary_tree_is_full(tree->left);
	right_full = binary_tree_is_full(tree->right);

	return (left_full && right_full);
}
