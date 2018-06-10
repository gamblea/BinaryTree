#include <iostream>
#include <cassert>

#include "Node.h"

using namespace std;

//#include "addingneighbours.h"


void connectNodes(Node *root);

int tree_height(Node *root);

Node *get_level(Node *node, int height, Node *last);

int max(int x, int y);


void connectNodes(Node *root)
{
	int height = tree_height(root);
	Node *last = root;
	for (int i = 0; i < height; i++)
	{
		last = get_level(root, i, last);
	}
}

int max(int x, int y)
{
	if (x > y) return x;
	else return y;
}

int tree_height(Node *node)
{
	if (node == nullptr) return 0;
	return 1 + max(tree_height(node->left), tree_height(node->right));
}

Node *get_level(Node *node, int height, Node *last)
{
	assert(node);
	assert(last);
	if (height == 0)
	{
		last->next = node;
		last = node;
		return last;
	}
	else
	{
		last = get_level(node->left, height - 1, last);
		last = get_level(node->right, height - 1, last);
		return last;
	}
}

int main()
{
	Node *root1 = new Node;
	root1->val = 5;
	Node *leftNode = new Node;
	leftNode->val = 2;
	Node *rightNode = new Node;
	rightNode->val = 8;
	root1->left = leftNode;
	root1->right = rightNode;

	connectNodes(root1);

	cout << "top node:" << root1->val << endl;
	cout << "left node:" << root1->left->val << endl;
	cout << "right node:" << root1->left->next->val << endl;


	return 0;
}
