#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insère un nouveau nœud comme enfant gauche.
 * @parent: Pointeur vers le nœud parent.
 * @value: Valeur à stocker dans le nouveau nœud.
 *
 * Return: Pointeur vers le nouveau nœud inséré, ou NULL en cas d'erreur.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	/* Création du nouveau nœud */
	node = binary_tree_node(parent, value);

	if (parent->left)
	{
		/* Déplacement de l'enfant existant */
		node->left = parent->left;
		node->left->parent = node;
	}
	parent->left = node;

	return (node);
}
