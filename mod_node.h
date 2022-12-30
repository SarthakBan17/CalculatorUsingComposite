#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
#include "Composite.h"

#ifndef _MODNODE_H_
#define _MODNODE_H_

class mod_Node : public exp_Node {
public:
    exp_Node* left;
    exp_Node* right;
    mod_Node(exp_Node* l, exp_Node* r);
    void accept(Visitor*);
    int evaluate(void);
};

#endif
