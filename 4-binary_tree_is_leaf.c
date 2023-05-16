#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: node structur
 * 
 * return: integer
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (NULL);
	return (1);
}
