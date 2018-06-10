// Node.h

#ifndef _NODE_H_
#define _NODE_H_

struct Node {
        Node *left;
        Node *right;
        Node *next;
        int val;
	int size;
	explicit Node(int val);
	Node(const Node &other);
	~Node();
};

#endif
