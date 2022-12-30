#include <iostream>
#include <cstring>
#include <sstream>
#include <string>

#ifndef _COMPOSITE_H_
#define _COMPOSITE_H_

//in order to get rid of circular dependancies
//wasnt able to create a binary node that can be used by add sub mul div and mod nodes because of error.
class Visitor;

class exp_Node {
public:
    virtual int evaluate(void) = 0;
    virtual void accept(Visitor*) = 0;
};

#endif
