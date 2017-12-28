// Name: Jake Edwards
// Professor: Dr. Ivancic
// Date: 10/24/2017
// Project: In Class Lab 3
// Class: CSC 331-001

#include <iostream>
#include "Vector3D.h"

using std::cout;
using std::cin;
using std::endl;

int main() {

	double x1;
	double y1;
	double z1;

	double x2;
	double y2;
	double z2;

	// prompt user
	cout << "Please enter the coordinates for two 3D vectors" << endl;

	cout << "Enter value for x1: " << endl;
	cin >> x1;

	cout << "Enter value for y1: " << endl;
	cin >> y1;

	cout << "Enter value for z1: " << endl;
	cin >> z1;

	cout << "Enter value for x2: " << endl;
	cin >> x2;

	cout << "Enter value for y2: " << endl;
	cin >> y2;

	cout << "Enter value for z2: " << endl;
	cin >> z2;


	// create both vector objects
	Vector3D vector1(x1, y1, z1);
	Vector3D vector2(x2, y2, z2);

	// print vector info
	cout << "Vector 1:" << endl;
	vector1.printVector();

	cout << "\nVector 2:" << endl;
	vector2.printVector();

	double dotProduct = vector1 * vector2;

	cout << "\nDot product of Vector 1 and Vector 2 is " << dotProduct << endl;

	Vector3D vector3 = vector1 + vector2;

	cout << "Vector 3:" << endl;
	vector3.printVector();

	return 0;
}
