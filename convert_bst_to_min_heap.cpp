#include <bits/stdc++.h> 
/*************************************************************
    
    Following is the Binary Tree node structure:

	class BinaryTreeNode {
		
	public :
		int data;
		BinaryTreeNode* left;
		BinaryTreeNode* right;

		BinaryTreeNode(int data) {
		this -> left = NULL;
		this -> right = NULL;
		this -> data = data;
		}
	};

*************************************************************/

void getInorder(BinaryTreeNode* root, vector<int>& inOrder){
	if(root == NULL){
		return;
	}
	getInorder(root->left,inOrder);
	inOrder.push_back(root->data);
	getInorder(root->right,inOrder);

}

void getPreorder(BinaryTreeNode* root, vector<int>& inOrder, int& index){
	if(root==NULL){
		return;
	}
	root->data = inOrder[index++];
	getPreorder(root->left,inOrder,index);
	getPreorder(root->right,inOrder,index);
}

BinaryTreeNode* convertBST(BinaryTreeNode* root)
{
	// Write your code here.
	BinaryTreeNode* temp = root;
	vector<int> inOrder;
	getInorder(root,inOrder);
	int index = 0;
	getPreorder(root,inOrder,index);
	return root;
}