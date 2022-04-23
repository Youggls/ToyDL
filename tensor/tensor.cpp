#include "./tensor.hpp"


Tensor::Tensor(vector<size_t> shape) {
    this->shape = shape;
    this->total_params = 0;
}

FloatTensor::FloatTensor(vector<size_t> shape): Tensor(shape) {
    this->total_params = 1;
    for (auto i: shape) {
        this->total_params *= i;
    }
    data = new fp32[this->total_params];
}

FloatTensor::~FloatTensor() {
    delete[] data;
}
