#include <stdio.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

    if (newNode == NULL)
    {
        return (NULL);
    }

    newNode->n = value;
    newNode->parent = parent;
    
    if (parent != NULL && parent->left != NULL)
    {
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->parent = NULL;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}