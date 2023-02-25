#pragma once

struct Connection
{
	Node* node;
	float weight;
};

class Node
{
private:
	float number;
	int bias;
	Connection* connections;
public:
	Node(float, int, Connection*);
	float get_number();
	int get_bias();
	Connection* get_connections();
};
