#pragma once

float sigmoid(float);

class Node
{
private:
	float number;
	Node** parents;
	bool input;

public:
	int bias;
	float weight;

	Node(float, int, float, Node**);

	float get_number();
	float get_weight();
	int get_bias();
	Node** get_connections();

	void change_number(float);
	float compute();
};

class MPNetwork
{
private:
public:
	Node* nodes;
	Node* input_nodes;
	Node* output_nodes;

	MPNetwork(Node*, Node*);
};

void rawlayernet(const unsigned int*, MPNetwork*);
