#ifndef TRIANGLE
#define TRIANGLE

#include "Shape.h"

class Triangle : public Shape
{
public:
	Triangle(Coord *vertices, int size) : Shape(vertices, size) {};
	~Triangle() {};

	string getType() const override { return "Triangle"; };

private:

};

#endif
