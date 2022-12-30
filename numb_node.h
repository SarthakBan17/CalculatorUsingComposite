#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
#include "Composite.h"

#ifndef _NUMBNODE_H_
#define _NUMBNODE_H_

class numb_Node : public exp_Node {
public:
    int numb;
    numb_Node(int n);
    int evaluate(void);
    void accept(Visitor*);
};

#endif
