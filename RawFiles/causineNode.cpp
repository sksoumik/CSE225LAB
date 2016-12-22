// This function prints cousins of a given node
void printCousins(Node *root, Node *node)
{
    // Get level of given node
    int level = getLevel(root, node, 1);

    // Print nodes of given level.
    printGivenLevel(root, node, level);
}
int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->right->right = newNode(15);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);

    printCousins(root, root->left->right);

    return 0;
}
