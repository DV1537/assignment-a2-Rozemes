#ifndef SHAPE
#define SHAPE

#include <string>
#include <cmath>
#include <iostream>

using namespace std;

struct Coord
{
	float x, y;
};

class Shape
{
public:

	Shape(const Coord *vertices, int size);
	virtual ~Shape();

	virtual string getType() const = 0;
	Coord position() const;				
	bool isCovex() const;				
	bool isSelfIntersecting() const;	
	float area() const;
	float circumreference() const;
	float distance(const Shape& s) const;

	void printVertices() const;

private:
	int size;
	Coord *vertices;
};

#endif // SHAPE
