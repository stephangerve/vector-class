#include <iostream>
#include <sstream>
#include "Vector.h"

int main(){
	
	std::string vectorStr;
	std::cout << "Enter vector: ";
	getline(std::cin, vectorStr);
	std::cout << vectorStr << std::endl;	
	Vector *v1 = new Vector(vectorStr);
	v1->printVector();

	std::cout << "Enter another vector: ";
	getline(std::cin, vectorStr);
	std::cout << vectorStr << std::endl;	
	Vector *v2 = new Vector(vectorStr);
	v2->printVector();
	Vector *v3 = v1 + v2;
	std::cout << "Sum: ";
	v3->printVector(); 

	


}
