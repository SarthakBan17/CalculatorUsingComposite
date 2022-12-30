#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
#include "Director.h"


int main()
{
	Director* direct = new Director(); //calling the director class
	bool check = true;
	std::string input, token;
	std::cout << "NOTE: The program is not optimised to take wrong equation" << std::endl;
	std::cout << "Please note that brackets is still not implemented" << std::endl;
	std::cout << std::endl;
	std::cout << "Please enter your equation below: " << std::endl;
	while (check == true) {
		std::cin >> input;  //taking the input as a string
		std::stringstream inputStream(input);  //converting the input into a string stream which makes it easier to get different tokens
		//checking if the input is either QUIT or an enter key
		if (input != "QUIT" && std::cin.get() != '\n') {
			std::getline(inputStream, token, ' ');  //parsing the input based on space
			//if checking the different tokens, if they are +, -, *, / or % they will go into the specified if statements
			if (token == "+") {
				direct->addInput();
			}
			else if (token == "-") {
				direct->subInput();
			}
			else if (token == "*") {
				direct->mulInput();
			}
			else if (token == "/") {
				direct->divInput();
			}
			else if (token == "%") {
				direct->modInput();
			}
			//if they arnt any of the operators assuming that the input is a number, have not implemented for () yet
			else {
				int numb = std::stoi(token);  //converting the input into a string
				direct->numbInput(numb);
			}
		}
		else {
			//checking if the user hit QUIT
			if (input == "QUIT") {
				check = false;  //if QUIT was entered then chainging the bool to false in order to exit the program
				break;
			}
			//if the user did not hit QUIT it can only be an enter push
			//since enter push does not have a space it needs to be parsed seperately
			else {
				int lnumb = std::stoi(input);  //convering the last number into int
				direct->numbInput(lnumb);
				direct->executeResult();
			}
		}
	}
	std::cout << "Thank you!" << std::endl;
}

