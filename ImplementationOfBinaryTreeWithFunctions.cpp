#include<iostream>
#include<climits>
#include<vector>
using namespace std;

class TreeNode{

public : 
 
    TreeNode *right;
    TreeNode *left;
    int val;

    TreeNode(int val){
        this->left=NULL;
        this->right=NULL;
        this->val=val;
    }
    // display the tree
    void display(TreeNode *root){
        if(root==NULL)return;
        cout<<root->val<<" ";

        display(root->right);
        display(root->left);
    }
    //  sum of all nodes
    int findSumOfNodes(TreeNode* root,int &sum){
        if(root==NULL)return 0;

        sum+=root->val;
        findSumOfNodes(root->left,sum);
        findSumOfNodes(root->right,sum);

        return sum;

    }
    // size of binary tree
    int findsize(TreeNode* root){
        if(root==nullptr)return 0;

        int size=1+findsize(root->left)+findsize(root->right);
        return size;
    }
    // find max element

    int findMaxEle(TreeNode* root,int &m){
        if(root==nullptr)return 0;
        m=max(m,root->val);
        findMaxEle(root->left,m);
        findMaxEle(root->right,m);

        return m;
    }
    // LEVELS IN TREE
    int FindLevels(TreeNode* root){
        if(root==NULL)return 0;
        return 1+max(FindLevels(root->left),FindLevels(root->right));
    }

    // DIAMETER OF TREE
    int FindDiameter(TreeNode* root,int &maxdia){
        if(root==NULL)return 0;
        int leftlevel=FindLevels(root->left);
        int rightLevel=FindLevels(root->right);
        int dia=leftlevel+rightLevel+1;
        maxdia=max(maxdia,dia);

        FindDiameter(root->left,maxdia);
        FindDiameter(root->right,maxdia);

        return maxdia;
    }
    void Findpath(TreeNode* root,string path,vector<string>&ans){
            if(root==NULL){
                return;
            }
            if(!root->left && !root->right){
                path+=to_string(root->val);
                ans.push_back(path);
            }

            path+=to_string(root->val)+"->";
            Findpath(root->left,path,ans);
            Findpath(root->right,path,ans);

    }
    // function to check if node exists
    bool find(TreeNode* root,TreeNode* x){
        if(root==NULL)return false;
        if(root==x)return true;
        return find(root->left,x)|| find(root->right,x);  //kisi ek subtree me x mil jae

    }
    // function to find lowest common ancesstor
    TreeNode* lcs(TreeNode*root,TreeNode* a,TreeNode* b){
        if(root==NULL)return nullptr;

        if(root==a || root==b)return root;
        else if(find(root->left,a)==true && find(root->right,b)==true)return root;
        else if(find(root->left,b)==true && find(root->right,a)==true)return root;
        else if(find(root->left,a)==true && find(root->left,b)==true)return lcs(root->left,a,b);
        else return lcs(root->right,a,b);

    }

};

main(){
            TreeNode *a=new TreeNode(1);
            TreeNode *b=new TreeNode(2);
            TreeNode *c=new TreeNode(3);
            TreeNode *d=new TreeNode(4);
            TreeNode *e=new TreeNode(5);
            TreeNode *f=new TreeNode(6);
            TreeNode *g=new TreeNode(7);
            TreeNode *H=new TreeNode(8);
            TreeNode *I=new TreeNode(9);
            TreeNode *J=new TreeNode(10);

            a->left=b;
            b->left=c;
            b->right=d;
            a->right=e;
            e->left=f;
            e->right=g;
            g->right=H;
            H->right=I;
            I->right=J;
            
            int sum=0;
            int maxele=INT_MIN;
            int diameter=INT_MIN;
            
            vector<string>ans;
            
            cout<<"tree is : ";
            a->display(a); 
            cout<<endl<<"sum is :"<<a->findSumOfNodes(a,sum)<<endl;
            cout<<"size is :"<<a->findsize(a)<<endl;
            cout<<"maximum element is :"<<a->findMaxEle(a,maxele)<<endl;
            cout<<"Number of levels are :"<<a->FindLevels(a)<<endl;
            cout<<"Diameter od binary tree is : "<<a->FindDiameter(a,diameter)<<endl;
            cout<<"Paths in tree are : "<<endl;
            a->Findpath(a,"",ans);

            // printing the paths
            for(auto ele:ans){
                cout<<ele<<endl;
            }
            cout<<endl<<"lcs of tree is "<<a->lcs(a,c,a)->val;
            



}