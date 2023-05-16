#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: The size (number of nodes) of the binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL) /* Si l'arbre est vide */
		return (0);

	size += 1; /* On incrémente la taille pour compter le nœud actuel */

	if (tree->left != NULL) /* Si l'arbre a un sous-arbre gauche */
		size += binary_tree_size(tree->left);
		/*ajoute la taille du sous-arbre gauche récursivement */

	if (tree->right != NULL) /* Si l'arbre a un sous-arbre droit */
		size += binary_tree_size(tree->right);
	/*ajoute la taille du sous-arbre droit récursivement */

	return (size); /* On renvoie la taille totale de l'arbre */
}

