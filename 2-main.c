#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int full;
/**
    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    root->left->left = binary_tree_node(root->left, 10);
*/

    root = binary_tree_node(NULL, 70);
    root->left = binary_tree_node(root, 50);
    root->right = binary_tree_node(root, 90);

    binary_tree_insert_right(root->left, 60);
    binary_tree_insert_left(root->left, 40);

    binary_tree_insert_right(root->right, 110);
    binary_tree_insert_left(root->right, 80);

    binary_tree_insert_right(root->right->right, 120);
    binary_tree_insert_left(root->right->right, 105);

    binary_tree_insert_right(root->left->left, 45);
    binary_tree_insert_left(root->left->left, 35);

    binary_tree_insert_right(root->right->left, 85);

    binary_tree_print(root);

    full = binary_tree_is_full(root);
    printf("Is %d full: %d\n", root->n, full);
    full = binary_tree_is_full(root->left);
    printf("Is %d full: %d\n", root->left->n, full);
    full = binary_tree_is_full(root->right);
    printf("Is %d full: %d\n", root->right->n, full);
    return (0);
}
