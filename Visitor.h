#include <iostream>
#include <cstring>
#include <sstream>
#include <string>

#ifndef _VISITOR_H_
#define _VISITOR_H_

//forward dependancies in order to not deal with circular dependancies
class numb_Node;
class add_Node;
class sub_Node;
class div_Node;
class mul_Node;
class mod_Node;

class Visitor {
public:
    virtual void visit(numb_Node*) = 0;
    virtual void visit(add_Node*) = 0;
    virtual void visit(sub_Node*) = 0;
    virtual void visit(mul_Node*) = 0;
    virtual void visit(div_Node*) = 0;
    virtual void visit(mod_Node*) = 0;
};

#endif
