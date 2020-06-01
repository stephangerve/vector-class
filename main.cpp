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
	
	std::cout << "v1[2] = " << v1->operator[](2) << std::endl;	
	v1->operator=(v2);
	std::cout << "v1 = v2: v1 = ";
	v1->printVector();
	
	Vector *v3 = v1->operator+(v2);
	std::cout << "v1 + v2: ";
	v3->printVector();

	Vector *v4 = v3->operator-(v3);
	std::cout << "v3 - v3: ";
	v4->printVector(); 

	
	delete v1;
	delete v2;

}
