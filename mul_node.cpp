#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
#include "mul_node.h"
#include "exp_Visitor.h"

mul_Node::mul_Node(exp_Node* l, exp_Node* r) : left(l), right(r) {}

int mul_Node::evaluate(void) {
	return left->evaluate() * right->evaluate();
}

void mul_Node::accept(Visitor* v) {
	v->visit(this);
}