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

//numb visitor. visits the numb node and then tries to print out the corrosponding number
void exp_Visitor::visit(numb_Node* n) {
    std::cout << n->numb << std::endl;
}

//goes to the add node, calls the add nodes evaluate.
//since i was not able to figure out how the add node would work with the visitor ended up calling evaluate. 
void exp_Visitor::visit(add_Node* a) {
    //a->left->accept(this); //was trying to seperate out visitor from the composite. I can use this to print the number but not sure how to add them...
    //a->right->accept(this);
    std::cout << "Your answer " << a->evaluate() << std::endl;
}

void exp_Visitor::visit(sub_Node* s) {
    // COMMENT: You are not using the visitor pattern correctly.
    // Instead, you have mixed the visitor with the composite version
    // of evaluate. You are to visit the left and right node via the
    // accept method to correctly implement the visitor pattern.
    // (e.g., left->accept (*this))
    //ANSWER: I tried following the method as shown in the add node. 
    //only ended up being able to print the number rather than add them
    //when trying to add them, got an error about not being able to add
    //two void types. 
    std::cout << "Your answer " << s->evaluate() << std::endl;
}
void exp_Visitor::visit(mul_Node* mu) {
    // COMMENT: You are not using the visitor pattern correctly.
    // Instead, you have mixed the visitor with the composite version
    // of evaluate. You are to visit the left and right node via the
    // accept method to correctly implement the visitor pattern.
    // (e.g., left->accept (*this))
    //ANSWER: I tried following the method as shown in the add node. 
    //only ended up being able to print the number rather than add them
    //when trying to add them, got an error about not being able to add
    //two void types.
    std::cout << "Your answer " << mu->evaluate() << std::endl;
}
void exp_Visitor::visit(div_Node* d) {
    // COMMENT: You are not using the visitor pattern correctly.
    // Instead, you have mixed the visitor with the composite version
    // of evaluate. You are to visit the left and right node via the
    // accept method to correctly implement the visitor pattern.
    // (e.g., left->accept (*this))
    //ANSWER: I tried following the method as shown in the add node. 
    //only ended up being able to print the number rather than add them
    //when trying to add them, got an error about not being able to add
    //two void types.
    std::cout << "Your answer " << d->evaluate() << std::endl;
}
void exp_Visitor::visit(mod_Node* m) {
    // COMMENT: You are not using the visitor pattern correctly.
    // Instead, you have mixed the visitor with the composite version
    // of evaluate. You are to visit the left and right node via the
    // accept method to correctly implement the visitor pattern.
    // (e.g., left->accept (*this))
    //ANSWER: I tried following the method as shown in the add node. 
    //only ended up being able to print the number rather than add them
    //when trying to add them, got an error about not being able to add
    //two void types.
    std::cout << "Your answer " << m->evaluate() << std::endl;
}
