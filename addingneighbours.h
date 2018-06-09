// Header file for addingneighbours.c 

struct Node {
	Node *left;
	Node *right;
	Node *next;
};

void connectNodes(Node *root);

int tree_height(Node *root);

Node *get_level(Node *node, int height, Node *last);

int max(int x, int y);


