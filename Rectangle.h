#pragma once
#include <stdio.h>
#include "IShape.h"

class Rectangle : public IShape {
public:
	void Size();

	void Draw();

private:

	float Radius = 30.0f;
};
