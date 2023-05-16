#include "binary_trees.h"
/**
* binary_tree_nodes - Counts the number of nodes in a binary tree.
* @tree: Pointer to the root node of the tree to count the nodes in.
*
* Return: The number of nodes in the binary tree.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t countnode = 0;

	if (tree == NULL)
		return (0);
	if ((tree->left != NULL) || (tree->right != NULL))
		countnode += 1;
	/*Incrémenter countnode si le nœud actuel a au moins un enfant*/
	countnode += binary_tree_nodes(tree->left);
	/*Compter récursivement les nœuds dans le sous-arbre gauche*/
	countnode += binary_tree_nodes(tree->right);
	/*Compter récursivement les nœuds dans le sous-arbre droit*/
	return (countnode);

}
