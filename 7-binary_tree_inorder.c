#include "binary_trees.h"
/**
 *binary_tree_inorder - function that goes throught a binary
 *@tree: tree structur
 *@func: function(print)
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Vérifie si l'arbre ou la fonction est NULL */
	if (!tree || !func)
		return;

	/* Parcours récursif du sous-arbre gauche en ordre */
	binary_tree_inorder(tree->left, func);

	/* Applique la fonction à la valeur du nœud courant */
	func(tree->n);

	/* Parcours récursif du sous-arbre droit en ordre */
	binary_tree_inorder(tree->right, func);
}
