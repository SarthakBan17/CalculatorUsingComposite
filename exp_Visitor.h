#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
#include "Visitor.h"

#ifndef _EXPVISITOR_H_
#define _EXPVISITOR_H_

class exp_Visitor : public Visitor {
public:
    exp_Visitor() {}
    void visit(numb_Node*);
    void visit(add_Node*);
    void visit(sub_Node*);
    void visit(mul_Node*);
    void visit(div_Node*);
    void visit(mod_Node*);
};

#endif