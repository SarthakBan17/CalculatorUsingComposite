#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
#include "Composite.h"

#ifndef _ADDNODE_H_
#define _ADDNODE_H_

class add_Node : public exp_Node {
public:
    exp_Node* left;
    exp_Node* right;
    add_Node(exp_Node* l, exp_Node* r);
    void accept(Visitor*);
    int evaluate(void);
};

#endif
