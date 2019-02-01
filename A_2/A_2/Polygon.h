#ifndef POLYGON
#define POLYGON

#include "Shape.h"

class Polygon : public Shape
{
public:
	Polygon(Coord *vertices = nullptr, int size = 0) : Shape(vertices, size) {};
	~Polygon() {};

	string getType() const override { return "Polygon"; };


};

#endif

