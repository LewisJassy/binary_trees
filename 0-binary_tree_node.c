#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node from parent
 * @parent: parent to create child from
 * @value: value of the node, data to store
 *
 * Return: pointer to new node OR (NULL) on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {
    // Allocate new memory for the new node
    binary_tree_t *newNode =  (binary_tree_t *)malloc(sizeof(binary_tree_t));
    // check if the memory allocation was succesfull
    if (newNode == NULL) {
        return (NULL);
    }
    // set values for the node
    newNode->n = value;
    newNode->parent = parent;
    newNode->right = NULL;
    newNode->left = NULL;

    return (newNode);
}
