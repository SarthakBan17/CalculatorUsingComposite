#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
#include "Composite.h"

#ifndef _MULNODE_H_
#define _MULNODE_H_

class mul_Node : public exp_Node {
public:
    exp_Node* left;
    exp_Node* right;
    mul_Node(exp_Node* l, exp_Node* r);
    void accept(Visitor*);
    int evaluate(void);
};

#endif