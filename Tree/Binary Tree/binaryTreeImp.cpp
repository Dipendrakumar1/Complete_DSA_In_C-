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

int main()
{
    node *root = new node(30);
    root->left = new node(40);
    root->right = new node(50);
    root->left->left = new node(70);
    root->right->left = new node(60);
    root->right->left = new node(80);
    root->displayTree(root);
    cout << endl;
    return 0;
}