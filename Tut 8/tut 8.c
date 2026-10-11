#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node* insert(struct Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

struct Node* search(struct Node* root, int key) {
    if (root == NULL || root->data == key) {
        return root;
    }

    if (key < root->data) {
        return search(root->left, key);
    }
    return search(root->right, key);
}

void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

void preorderTraversal(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(struct Node* root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    struct Node* root = NULL;

    root = insert(root, 8);
    root = insert(root, 5);
    root = insert(root, 10);
    root = insert(root, 4);
    root = insert(root, 7);
    root = insert(root, 6);

    printf("Inorder traversal (sorted): ");
    inorderTraversal(root);
    printf("\n");

    printf("Preorder traversal:         ");
    preorderTraversal(root);
    printf("\n");

    printf("Postorder traversal:        ");
    postorderTraversal(root);
    printf("\n\n");

    int key = 7;
    if (search(root, key) != NULL)
        printf("Search %d: Found\n", key);
    else
        printf("Search %d: Not found\n", key);

    key = 20;
    if (search(root, key) != NULL)
        printf("Search %d: Found\n", key);
    else
        printf("Search %d: Not found\n", key);

    return 0;
}
