#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node from parent
 * @parent: parent to create child from
 * @value: value of the node, data to store
 *
 * Return: pointer to new node OR (NULL) on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

    if (newNode == NULL)
        return (NULL);

    newNode->n = value;
    newNode->parent =  parent;

    if (parent == NULL)
        return (NULL);

    newNode->left = NULL;
    newNode->right = NULL;

    if (parent->right != NULL)
    {
        newNode->right = parent->right;
        parent->right->parent = newNode;
    }
    parent->right = newNode;
    return (newNode);
}
