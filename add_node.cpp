#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
#include "add_node.h"
#include "exp_Visitor.h"

add_Node::add_Node(exp_Node* l, exp_Node* r) : left(l), right(r) {}

int add_Node::evaluate(void) {
	return left->evaluate() + right->evaluate();
}

void add_Node::accept(Visitor* v) {
	v->visit(this);
}