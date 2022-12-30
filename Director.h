#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
#include "Stack.h"
#include "exp_builder.h"

#ifndef _DIRECTOR_H_
#define _DIRECTOR_H_

//this class is responsible for using the Stack in order to figure out the right time to build a certain builder
class Director {
private:
	Stack<char> *stackOperator;
	exp_Builder build;
public:
	Director();
	void numbInput(int n);
	void addInput();
	void subInput();
	void addsubCommand();
	void mulInput();
	void divInput();
	void modInput();
	void muldivmodCommand();
	void executeResult();
};

#endif