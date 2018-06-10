// Node.cc

#include "Node.h"

Node::Node(int val): 
	left{nullptr}, right{nullptr}, next{nullptr}, val{val} {}

Node::Node(const Node &other):
	left{other.left ? new Node(*other.left) : nullptr},
	right{other.right ? new Node(*other.right) : nullptr},
	next{nullptr},
	val{other.val}
{}

