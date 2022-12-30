#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
#include "Composite.h"

#ifndef _SUBNODE_H_
#define _SUBNODE_H_

class sub_Node : public exp_Node {
public:
    exp_Node* left;
    exp_Node* right;
    sub_Node(exp_Node* l, exp_Node* r);
    void accept(Visitor*);
    int evaluate(void);
};

#endif