#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
#include "sub_node.h"
#include "exp_Visitor.h"

sub_Node::sub_Node(exp_Node* l, exp_Node* r) : left(l), right(r) {}

int sub_Node::evaluate(void) {
	return left->evaluate() - right->evaluate();
}

void sub_Node::accept(Visitor* v) {
	v->visit(this);
}