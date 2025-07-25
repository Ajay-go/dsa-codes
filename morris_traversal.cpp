#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class TreeNode
{
    TreeNode* left = NULL;
    TreeNode *right = NULL;
    int val;

public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> ans;

        auto curr = root;
        while (curr)
        {
            if (!curr->left)
            {
                ans.push_back(curr->val);
                curr = curr->right;
            }
            else
            {
                auto leftnode = curr->left;
                while (leftnode && leftnode->right)
                {
                    leftnode = leftnode->right;
                }
                leftnode->right = curr;

                auto c = curr;
                curr = curr->left;
                c->left = NULL;
            }
        }
        return ans;
    }
    vector<int> preorderTraversal(TreeNode *root)
    {
        auto curr = root;
        vector<int> ans;
        while (curr)
        {
            if (!curr->left)
            {
                ans.push_back(curr->val);
                curr = curr->right;
            }
            else
            {
                auto leftnode = curr->left;
                while (leftnode->right)
                    leftnode = leftnode->right;
                if (curr->right)
                    leftnode->right = curr->right;
                else
                    leftnode->right = NULL;

                auto c = curr;
                ans.push_back(c->val);
                curr = curr->left;
                c->left = NULL;
            }
        }
        return ans;
    }
};
int main() {

    
    return 0;
}