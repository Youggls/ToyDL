#pragma once
#include "../modules/module.hpp"
#include "./types.hpp"

class Tensor {
protected:
    Tensor* prev;
    vector<size_t> shape;
    size_t total_params;
public:
    Tensor(vector<size_t> shape);
    ~Tensor();
    virtual Tensor* add(Tensor* other) = 0;
    virtual Tensor* mul(Tensor* other) = 0;
    virtual Tensor* sub(Tensor* other) = 0;
    // virtual Tensor* div(Tensor* other) = 0;
};


class FloatTensor: public Tensor {
protected:
    fp32* data;
public:
    FloatTensor(vector<size_t> shape);
    ~FloatTensor();
    Tensor* add(Tensor* other);
    Tensor* mul(Tensor* other);
    Tensor* sub(Tensor* other);
    // Tensor* div(Tensor* other);
};


class IntTensor: public Tensor {
protected:
    int32* data;
public:
    IntTensor(vector<size_t> shape);
    ~IntTensor();
    Tensor* add(Tensor* other);
    Tensor* mul(Tensor* other);
    Tensor* sub(Tensor* other);
    // Tensor* div(Tensor* other);
};
