#include "nnet.h"
#include <cstdlib>

static int digits(long long n)
{
    if (n == 0)
        return 1;
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}

Node::Node(float n = 0.0f, int b = 0, Connection* cons):connections(cons)
{
	long long x = (long long)rand();
    if (n == 0.0f) number = x / (float)(10 ^ digits(x));
    else number = n;
    if (n == 0) bias = rand();
    else number = n;
}

float Node::get_number()
{
	return number;
}

int Node::get_bias()
{
	return bias;
}

Connection* Node::get_connections()
{
    return connections;
}
