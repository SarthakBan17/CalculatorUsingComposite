#include <iostream>
#include <cstring>
#include <sstream>
#include <string>

#ifndef _BUILDER_H_
#define _BUILDER_H_

//used to build all the composite nodes and then call the visitor to evaluate

class builder {
public:
	//virtual void start_Exp(void) = 0;
	virtual void numb_Exp(int) = 0;
	virtual void add_Exp(void) = 0;
	virtual void sub_Exp(void) = 0;
	virtual void mul_exp(void) = 0;
	virtual void div_exp(void) = 0;
	virtual void mod_exp(void) = 0;
	virtual void eval_Exp(void) = 0;
};

#endif
