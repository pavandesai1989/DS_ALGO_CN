#include"BinaryTreeNode.h"
#include<iostream>
using namespace std;

void printBinaryTreeNode(BinaryTreeNode<int>* root)
{
	if (!root)
		return;

	cout << root->data << endl;
	printBinaryTreeNode(root->left);
	printBinaryTreeNode(root->right);
}

//modify print function so that it will add L and R in info
void printBinaryTreeNode_Modified(BinaryTreeNode<int>* root)
{
	if (!root)
		return;

	cout << root->data << ":";
	if (root->left)
	{
		cout << "L" << root->left->data;
	}
	if (root->right)
	{
		cout << "L" << root->right->data;
	}
	cout << endl;
	printBinaryTreeNode(root->left);
	printBinaryTreeNode(root->right);

}



int main()
{
	//create 3 nodes
	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
	BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(2);
	BinaryTreeNode<int>* node2 = new BinaryTreeNode<int>(3);

	//connect nodes 2 and 3 to 1
	root->left = node1;
	root->right = node2;

	printBinaryTreeNode(root);
	cout << endl << endl;

	printBinaryTreeNode_Modified(root);

	return 0;
}
