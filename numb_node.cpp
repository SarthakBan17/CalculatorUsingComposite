#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
#include "numb_node.h"
#include "exp_Visitor.h"

numb_Node::numb_Node(int n) : numb(n) {}

int numb_Node::evaluate(void) {
	return this->numb;
}

void numb_Node::accept(Visitor* v) {
	v->visit(this);
}