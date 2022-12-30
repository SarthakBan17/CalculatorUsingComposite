#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
#include "Composite.h"

#ifndef _DIVNODE_H_
#define _DIVNODE_H_

class div_Node : public exp_Node {
public:
    exp_Node* left;
    exp_Node* right;
    div_Node(exp_Node* l, exp_Node* r);
    void accept(Visitor*);
    int evaluate(void);
};

#endif
