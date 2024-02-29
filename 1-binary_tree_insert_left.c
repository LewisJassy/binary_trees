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
    newNode->left = parent;
    newNode->right = NULL;

    if (parent == NULL)
    {
        return (NULL);
    }
    return (newNode);
}
