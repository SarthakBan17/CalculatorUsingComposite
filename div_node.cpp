#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
#include "div_node.h"
#include "exp_Visitor.h"

div_Node::div_Node(exp_Node* l, exp_Node* r) : left(l), right(r) {}

int div_Node::evaluate(void) {
	return left->evaluate() / right->evaluate();
}

void div_Node::accept(Visitor* v) {
	v->visit(this);
}