#include <iostream>
#include "neuralnet/nnet.h"
using namespace std;

int main() 
{
	Node n1(0.0f, 0, nullptr);
	Connection con = {
		&n1,
		1.0
	};
	Connection con_list[] = { con };
	Node n2(0.21f, 0, con_list);

	cout << n2.get_bias() << endl;
	cout << n2.get_number() << endl;
	cout << n2.get_connections()[0].weight << endl;
	cout << n2.get_connections()[0].node->get_bias() << endl;
	cout << n2.get_connections()[0].node->get_number() << endl;
	cout << n2.get_connections()[0].node->get_connections() << endl;
}
