#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: The height of the tree, or 0 if the tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftCount = 0, rightCount = 0;

	if (tree == NULL) /* Vérifie si l'arbre est vide (NULL) */
		return;

	if (tree->left != NULL) /* Vérifie s'il y a un nœud gauche */
		leftCount = 1 + binary_tree_height(tree->left);
		/* Calcule la hauteur du sous-arbre gauche récursivement */

	if (tree->right != NULL) /* Vérifie s'il y a un nœud droit */
		rightCount = 1 + binary_tree_height(tree->right);
		/* Calcule la hauteur du sous-arbre droit récursivement */

	if (leftCount > rightCount) /*Compare la hauteur du sous-arbre g et d */
		return (leftCount); /* Retourne la hauteur du sous-arbre gauche */

	return (rightCount); /* Retourne la hauteur du sous-arbre droit */
}
