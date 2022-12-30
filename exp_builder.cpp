#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
#include "exp_Visitor.h"
#include "add_node.h"
#include "numb_node.h"
#include "sub_node.h"
#include "mul_node.h"
#include "div_node.h"
#include "mod_node.h"
#include "builder.h"
#include "exp_builder.h"


//used to build the number node in the composote tree
//it is stored as an array since in a expression there can be multiple composite trees
void exp_Builder::numb_Exp(int n) {
	numb[lnumb] = new numb_Node(n);
	lnumb++;
}

//add expression is used to connect two nods with an addition node. 
//depending on the number of numb nodes it will either connect with two numb nodes,
//an exp node and an add node or two exp nodes. This is the same for the rest of the exp nodes.
void exp_Builder::add_Exp(void) {
	if (lnumb == 2) {
		exp[lexp] = new add_Node(numb[lnumb - 1], numb[lnumb - 2]);
		lexp++;
		lnumb = lnumb - 2;
	}
	else if (lnumb == 1) {
		exp[lexp] = new add_Node(exp[lexp - 1], numb[lnumb - 1]);
		lexp++;
	}
	else {
		exp[lexp] = new add_Node(exp[lexp - 2], exp[lexp - 1]);
		lexp++;
	}
}
void exp_Builder::sub_Exp(void) {
	if (lnumb == 2) {
		exp[lexp] = new sub_Node(numb[lnumb - 1], numb[lnumb - 2]);
		lexp++;
		lnumb = lnumb - 2;
	}
	else if (lnumb == 1) {
		exp[lexp] = new sub_Node(exp[lexp - 1], numb[lnumb - 1]);
		lexp++;
	}
	else {
		exp[lexp] = new sub_Node(exp[lexp - 2], exp[lexp - 1]);
		lexp++;
	}
}

void exp_Builder::mul_exp(void) {
	if (lnumb == 2) {
		exp[lexp] = new mul_Node(numb[lnumb - 1], numb[lnumb - 2]);
		lexp++;
		lnumb = lnumb - 2;
	}
	else if (lnumb == 1) {
		exp[lexp] = new mul_Node(exp[lexp - 1], numb[lnumb - 1]);
		lexp++;
	}
	else {
		exp[lexp] = new mul_Node(exp[lexp - 2], exp[lexp - 1]);
		lexp++;
	}
}

void exp_Builder::div_exp(void) {
	if (lnumb == 2) {
		exp[lexp] = new div_Node(numb[lnumb - 1], numb[lnumb - 2]);
		lexp++;
		lnumb = lnumb - 2;
	}
	else if (lnumb == 1) {
		exp[lexp] = new div_Node(exp[lexp - 1], numb[lnumb - 1]);
		lexp++;
	}
	else {
		exp[lexp] = new div_Node(exp[lexp - 2], exp[lexp - 1]);
		lexp++;
	}
}

void exp_Builder::mod_exp(void) {
	if (lnumb == 2) {
		exp[lexp] = new mod_Node(numb[lnumb - 1], numb[lnumb - 2]);
		lexp++;
		lnumb = lnumb - 2;
	}
	else if (lnumb == 1) {
		exp[lexp] = new mod_Node(exp[lexp - 1], numb[lnumb - 1]);
		lexp++;
	}
	else {
		exp[lexp] = new mod_Node(exp[lexp - 2], exp[lexp - 1]);
		lexp++;
	}
}

//the visitor is called here, the visitor visits the tree and figure out how to solve the tree. 
//also the arrays are reset back to 0 at this stage in order to make room for the new set of formulas
void exp_Builder::eval_Exp(void) {
	lexp--;
	exp[lexp]->accept(&visit);
	lexp = 0;
	lnumb = 0;
}