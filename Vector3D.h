class Vector3D {
	private:

	//member variables
	double x;
	double y;
	double z;

	public:

	//constructor
	Vector3D(double, double, double);

	//class methods
	void printVector();
	double getX();
	double getY();
	double getZ();

	double operator* (const Vector3D &obj);
	Vector3D operator+ (const Vector3D &obj);

};
