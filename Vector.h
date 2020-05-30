#ifndef VECTOR_H_EXISTS
#define VECTOR_H_EXISTS

#include <iostream>

class Vector{
	private:
		int n;
		double *arrayPtr;

	public:
		Vector();
		Vector(std::string);
		~Vector();
		//Vector operator=(const Vector&);
		Vector* operator+(Vector);
		//Vector operator-(const Vector&);
		//Vector operator*(const Vector&);
		//Vector operator*(const double&);
		//Vector operator/(const double&);
		inline double operator[](const int&);
		inline int size();
		//inline double norm();
		void insert(double);
		void printVector();
		
		




};






#endif
