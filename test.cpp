#include <iostream>
#include "neuralnet/nnet.h"
using namespace std;

int main() 
{
	Node n1(0.2f, 0, 0.5f, nullptr);
	Node* list[] = { &n1 };
	Node n2(0.21f, 0, 0.47f, list);

	//cout << "Bias of n2: " << n2.get_bias() << endl;
	//cout << "number of n2: " << n2.get_number() << endl;
	//cout << "n1 weight from n2: " << n2.get_connections()[0]->weight << endl;
	//cout << "number of n1 from n2: " << n2.get_connections()[0]->get_number() << endl;

	n2.compute();
	cout << "number of n2: " << n2.get_number() << endl;
}
