#pragma once
#include <vector>
using std::vector;

class Module {
private:
    Module* prev;
    Module* next;
public:
    Module();
    ~Module();
    virtual vector<Module*> forward(vector<Module*> input) = 0;
    virtual vector<Module*> backward(vector<Module*> grad) = 0;
};
