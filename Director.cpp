#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
#include "Director.h"


Director::Director() : stackOperator(new Stack<char>) {}

//used to build the number class
void Director::numbInput(int n) {
	build.numb_Exp(n);
}

//using the algorithm from assignment 3 created a similar working director class.
//the director calls the stack and depending on the operator that was present in the stack
//either pushes or pops and calls the builder
void Director::addInput() {
	if (stackOperator->isEmpty() == true) {
		stackOperator->push('+');
	}
	else {
		addsubCommand();
		stackOperator->push('+');
	}
}

void Director::subInput() {
	if (stackOperator->isEmpty() == true) {
		stackOperator->push('-');
	}
	else {
		addsubCommand();
		stackOperator->push('-');
	}
}

void Director::addsubCommand() {
	while (stackOperator->isEmpty() == false) {
		char oper = stackOperator->pop();
		if (oper == '+') {
			build.add_Exp();
		}
		else if (oper == '-') {
			build.sub_Exp();
		}
		else if (oper == '*') {
			build.mul_exp();
		}
		else if (oper == '/') {
			build.div_exp();
		}
		else if (oper == '%') {
			build.mod_exp();
		}
	}
}

void Director::mulInput() {
	if (stackOperator->isEmpty() == true) {
		stackOperator->push('*');
	}
	else {
		muldivmodCommand();
		stackOperator->push('*');
	}
}

void Director::divInput() {
	if (stackOperator->isEmpty() == true) {
		stackOperator->push('/');
	}
	else {
		muldivmodCommand();
		stackOperator->push('/');
	}
}

void Director::modInput() {
	if (stackOperator->isEmpty() == true) {
		stackOperator->push('%');
	}
	else {
		muldivmodCommand();
		stackOperator->push('%');
	}
}

void Director::muldivmodCommand() {
	char oper = stackOperator->pop();
	if (oper == '+') {
		stackOperator->push(oper);
	}
	else if (oper == '-') {
		stackOperator->push(oper);
	}
	else if (oper == '*') {
		build.mul_exp();
	}
	else if (oper == '/') {
		build.div_exp();
	}
	else if (oper == '%') {
		build.mod_exp();
	}
}

void Director::executeResult() {
	if (stackOperator->isEmpty() == true) {
		build.eval_Exp();
	}
	else {
		addsubCommand();
		build.eval_Exp();
	}
}