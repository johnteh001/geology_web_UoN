#include "binary_tree.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Return: Nothing (void)
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);

    free(tree);
}
