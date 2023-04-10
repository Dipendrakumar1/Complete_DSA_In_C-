#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int key;
    node *left;
    node *right;
    node(int k)
    {
        key = k;
        left = right = NULL;
    }
    void displayTree(node *r)
    {
        cout << r->key << endl;
    }
};

// time complexity of recursive traversal: O(n)
// auxilary space of recursive traversal: O(h) --> h--> height of tree

// inOrder Traversal
void inOrder(node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->key<<" --> ";
    inOrder(root->right);
    
}
// preOrder Traversal
void preOrder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->key<<" --> ";
    preOrder(root->left);
    preOrder(root->right);

}
// PostOrder Traversal
void postOrder(node* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->key<<" --> ";

}
int main()
{
    node *root = new node(30);
    root->left = new node(40);
    root->right = new node(50);
    root->left->left = new node(70);
    root->right->left = new node(60);
    root->right->left = new node(80);
    cout<<"\n==== Inorder Traversal ====\n";
    inOrder(root);
    cout<<"\n==== Preorder Traversal ====\n";
    preOrder(root);
    cout<<"\n==== Postorder Traversal ====\n";
    postOrder(root);
    cout << endl;
    return 0;
}