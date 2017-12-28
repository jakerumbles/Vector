#include <iostream>
#include "Vector3D.h"

using std::cout;
using std::endl;

	//constructor
	Vector3D::Vector3D(double x, double y, double z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	//class methods
	void Vector3D::printVector() {
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;
		cout << "z: " << z << endl;
	}

	double Vector3D::getX() {
		return x;
	}

	double Vector3D::getY() {
		return y;
	}

	double Vector3D::getZ() {
		return z;
	}

	double Vector3D::operator* (const Vector3D &obj) {
		double x = this->x * obj.x;
		double y = this->y * obj.y;
		double z = this->z * obj.z;

		return x + y + z;
	}

	Vector3D Vector3D::operator+ (const Vector3D &obj) {
		double a1 = this->x;
		double a2 = this->y;
		double a3 = this->z;

		double b1 = obj.x;
		double b2 = obj.y;
		double b3 = obj.z;

		double x3 = a2*b3 - a3*b2;
		double y3 = a1*b3 - a3*b1;
		double z3 = a1*b2 - a2*b1;

		Vector3D vector3(x3, y3, z3);
		return vector3;
	}
