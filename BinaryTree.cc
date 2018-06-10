// BinaryTree.cc

#include "BinaryTree.h"
#include <algorithm>
#include <iostream>

BinaryTree::BinaryTree() : 
	root{nullptr},size{0} {}


int BinaryTree::tree_height(Node *node)
{
	if (node == nullptr) return 0;
	return 1 + std::max(tree_height(node->left), tree_height(node->right));
}

void BinaryTree::AddNexts()
{
	int height = tree_height(root);
	Node *last = root;
	for (int i = 0; i < height; i++)
	{
		last = get_level(root, i, last);
	}
}

Node *BinaryTree::get_level(Node *node, int height, Node *last)
{
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

void BinaryTree::Insert(int value)
{
	root = bstnode_insert_help(value, root);
}

Node *BinaryTree::bstnode_insert_help(int value, Node *node)
{
  if (node == nullptr)
  {
    node = new Node{value};
  }
  else if (value < node->val)
  {
    node->left = bstnode_insert_help(value, node->left);
  }
  else if (value > node->val)
  {
    node->right = bstnode_insert_help(value, node->right);
  }
  else
  {
    node->val= value;
  }
  
  node->size = 1;
  
  if (node->left) node->size += node->left->size;
  if (node->right) node->size += node->right->size;
  
  return node;
}

void BinaryTree::PrintPre()
{
	node_print_pre(root);
}
void BinaryTree::PrintIn()
{
	node_print_in(root);
}
void BinaryTree::PrintPost()
{
	node_print_post(root);
}	

void BinaryTree::node_print_pre(Node *node)
{
  if (node)
  {
    std::cout << node->val << std::endl;
    node_print_pre(node->left);
    node_print_pre(node->right);
  }
}

void BinaryTree::node_print_in(Node *node)
{
  if (node)
  {
    node_print_in(node->left);
    std::cout << node->val << std::endl;
    node_print_in(node->right);
  }
}

void BinaryTree::node_print_post(Node *node)
{
  if (node)
  {
    node_print_post(node->left);
    node_print_post(node->right);
    std::cout << node->val << std::endl;
  }
}

BinaryTree::~BinaryTree()
{
	delete root;
}


