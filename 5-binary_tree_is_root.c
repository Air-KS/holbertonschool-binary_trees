#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks if a given node is a root
 * @node: node structur
 *
 * Return: integer
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	/* Vérifie si le nœud est NULL ou a un parent */
	if (!node || node->parent)
		return (0);

	/* Retourne 1 si le nœud est un nœud racine */
	return (1);
}

