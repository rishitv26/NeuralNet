#include "nnet.h"
#include <cstdlib>
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

Node::Node(float n = 0.0f, int b = 0, float w = 0.0f, Node** cons = nullptr)
{
    srand((unsigned)time(NULL));

    number = n;
    if (b == 0) bias = rand() % 10;
    else bias = b;
    if (n == 0.0f) weight = (float)rand() / RAND_MAX;
    else weight = n;
    if (cons == nullptr) input = true;
    parents = cons;
}
float Node::get_number() { return number; }
float Node::get_weight() { return weight; }
int Node::get_bias() { return bias; }
Node** Node::get_connections() { return parents; }
void Node::change_number(float n)
{
    if (input) number = n;
    else cout << "Error: Can't change number of a non-input node\n";
}

float sigmoid(float in) { return 1.0f / (1.0f + (float)pow((float)exp(1), in)); }
float Node::compute()
{
    float sum = 0.0f;
    for (int i = 0; i < sizeof(parents) / sizeof(parents[0]); i++)
    {
        sum += parents[i]->get_weight() * parents[i]->get_number();
    }
    sum -= bias;
    float sig = sigmoid(sum); number = sig;
    return sig;
}

MPNetwork::MPNetwork(Node* ns, Node* nis)
{
    nodes = ns;
    input_nodes = nis;
}
void rawlayernet(const unsigned int* layers, MPNetwork* net)
{
    Node*** nods;
    for (int i = 0; i < (int)layers[0]; i++)
    {
        Node n(0.0f, 0, 0.0f, nullptr);
        nods[0][i] = &n;
    }
    for (int i = 1; i < sizeof(layers) / sizeof(layers[0]); i++) // i = 1 since i = 0 is handled differently
    {

    }
}
