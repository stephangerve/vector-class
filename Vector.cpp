#include <iostream>
#include <sstream>
#include "Vector.h"

Vector::Vector(){
	n = 0;	
}
Vector::Vector(std::string vectorStr){
	n = 0;
	std::stringstream parser, converter;
	std::string componentStr;
	double component;
	parser.clear();
	parser.str("");
	parser.str(vectorStr);
	while(getline(parser, componentStr, ',')){
		converter.clear();
		converter.str("");
		converter << componentStr;
		converter >> component;
		insert(component);		
	}
}
Vector::~Vector(){
	free(arrayPtr);
}

Vector* Vector::operator+(Vector addend){
	if(this->size() != addend->size()){
		std::cout << "Error. Vectors need to be the same size." << std::endl;
		return new Vector();
	}
	else{
		Vector *sum = new Vector();
		for(int i = 0; i < addend->size(); i++){
			insert(this[i] + addend[i]);
		}
		return sum;
	}
}

inline double operator[](const int& i){
	if(i >= n || i < 0){
		std::cout << "Error. Out of bounds." << std::endl;
	}
	else{
		return arrayPtr[i];
	}
}

inline int Vector::size(){
	return n;
}

void Vector::insert(double k){
	n++;
	arrayPtr = (double*)realloc(arrayPtr, n*sizeof(double));
	arrayPtr[n - 1] = k;
}

void Vector::printVector(){
	std::cout << "[";
	for(int i = 0; i < n; i++){
		std::cout << arrayPtr[i];
		if(i == n - 1){
			std::cout << "]";
		}
		else{
			std::cout << ", ";
		}
	}
	std::cout << std::endl;
}

