#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
#include "mod_node.h"
#include "exp_Visitor.h"

mod_Node::mod_Node(exp_Node* l, exp_Node* r) : left(l), right(r) {}

int mod_Node::evaluate(void) {
	return left->evaluate() / right->evaluate();
}

void mod_Node::accept(Visitor* v) {
	v->visit(this);
}