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
#include "Stack.h"


#ifndef _EXPBUILDER_H_
#define _EXPBUILDER_H_

//extends the builder and is used to build the composite tree
class exp_Builder : public builder {
private:
	//both the numb and exp nodes are in the form of arrays because
	//they can have multiple of the same type. Having them as an array
	//makes it easier to connect the different nodes. 
	exp_Node* numb[50];
	exp_Node* exp[50];
	int lexp = 0;
	int lnumb = 0;
	exp_Visitor visit;
public:
	void numb_Exp(int);
	void add_Exp(void);
	void sub_Exp(void);
	void mul_exp(void);
	void div_exp(void);
	void mod_exp(void);
	void eval_Exp(void);
};

#endif