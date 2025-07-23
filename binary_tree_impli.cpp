#include <iostream>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

public:
    TreeNode(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }

    static void addNode(TreeNode *parent, int val)
    {
        TreeNode *child = new TreeNode(val);
        if (!parent->left)
            parent->left = child;
        else if (!parent->right)
            parent->right = child;
        else
            cout << "Both children already exist for node " << parent->val << endl;
    }

    static void inorder(TreeNode *head)
    {
        if (!head)
            return;
        inorder(head->left);
        cout << head->val << " ";
        inorder(head->right);
    }

    static void preorder(TreeNode *head)
    {
        if (!head)
            return;
        cout << head->val << " ";
        preorder(head->left);
        preorder(head->right);
    }

    static void postorder(TreeNode *head)
    {
        if (!head)
            return;
        postorder(head->left);
        postorder(head->right);
        cout << head->val << " ";
    }
};

int main()
{
    TreeNode *head = new TreeNode(10);
    TreeNode::addNode(head, 20);        // left child
    TreeNode::addNode(head, 30);        // right child
    TreeNode::addNode(head->left, 40);  // left->left
    TreeNode::addNode(head->right, 50); // right->left

    cout << "Inorder: ";
    TreeNode::inorder(head);
    cout << endl;

    cout << "Preorder: ";
    TreeNode::preorder(head);
    cout << endl;

    cout << "Postorder: ";
    TreeNode::postorder(head);
    cout << endl;
}
