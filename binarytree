#include <iostream>
using namespace std;

class BinaryTreeNode{
public:
    int data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class BinaryTree{
public:
    BinaryTreeNode * root;

    BinaryTree(){
        root = NULL;
    }
};

void inorder(BinaryTreeNode* root){
    if (root == NULL){
        return;
    }

    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);
}

void preorder(BinaryTreeNode* root){
    if (root == NULL){
        return ;
    }

    cout << root->data << endl;
    preorder(root->left);
    preorder(root->right);
}

void postorder(BinaryTreeNode* root){
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << endl;
}

int main (){

    BinaryTree tree;

    tree.root = new BinaryTreeNode(1);
    tree.root->left = new BinaryTreeNode(2);
    tree.root->right = new BinaryTreeNode(3);
    tree.root->left->left = new BinaryTreeNode(4);

    cout << "inorder :";
    inorder(tree.root);

    cout << "preorder:";
    preorder(tree.root);

    cout << "postorder:";
    postorder(tree.root);
}