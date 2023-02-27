import numpy as np
np.random.seed(0)

X = [
    [1, 2, 3, 2.5],
    [2.0, 5.0, -1.0, 2.0],
    [-1.5, 2.7, 3.3, -0.8],
]

class Layer:
    def __init__(self, n_inputs, n_neurons):
        self.weights = 0.1 * np.random.randn(n_inputs, n_neurons)
        self.biases = np.zeros((1, n_neurons))

    def compute(self, inputs):
        self.output = np.dot(inputs, self.weights) + self.biases

layer1 = Layer(4, 9)
layer2 = Layer(9, 2)

layer1.compute(X)
print(layer1.output)
layer2.compute(layer1.output)
print(layer2.output)
