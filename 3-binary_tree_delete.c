#include "binary_trees.h"

/**
 * binary_tree_delete - function that delete a node
 * @tree: tree structur
 *
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
}
