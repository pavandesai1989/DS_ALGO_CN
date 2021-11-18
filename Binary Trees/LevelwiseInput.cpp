#include "BinaryTreeNode.h"
#include<iostream>
#include<queue>
using namespace std;

//take input level wise 
BinaryTreeNode<int>* takeinputLevelwise()
{
	//ask for the root data
	int rootdata;
	cout << "enter the root data" << endl;
	cin >> rootdata;

	//create root node
	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootdata);

	//create queue.push nodes whose children inputs we need to take.
	queue< BinaryTreeNode<int>*>  pendingnodes;
	pendingnodes.push(root);

	//work till queue is not empty
	while (!pendingnodes.empty())
	{
		//take the front node
		BinaryTreeNode<int>* front = pendingnodes.front();
		//pop the front node
		pendingnodes.pop();

		//ask for the left child of front node
		int leftchilddata;
		cout << "enter the left child of " << front->data << endl;
		cin >> leftchilddata;

		if (leftchilddata != -1)
		{
			BinaryTreeNode<int>* leftchild = new BinaryTreeNode<int>(leftchilddata);
			//attach this to left of front node
			front->left = leftchild;
			//push this to queue.
			pendingnodes.push(leftchild);
		}

		//ask for the right child of front node
		int rightchilddata;
		cout << "enter the right child of " << front->data << endl;
		cin >> rightchilddata;

		if (rightchilddata != -1)
		{
			BinaryTreeNode<int>* rightchild = new BinaryTreeNode<int>(rightchilddata);
			//attach this to left of front node
			front->right = rightchild;
			//push this to queue.
			pendingnodes.push(rightchild);
		}

	}
	return root;
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
		cout << "R" << root->right->data;
	}
	cout << endl;
	printBinaryTreeNode_Modified(root->left);
	printBinaryTreeNode_Modified(root->right);

}


int main()
{
	BinaryTreeNode<int>* root = takeinputLevelwise();

	printBinaryTreeNode_Modified(root);


	return 0;
}
