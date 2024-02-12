#pragma once
#include <stdio.h>
#include "IShape.h"

class Circle : public IShape {

	public:
	void Size();

	void Draw();

private:
	float Radius = 30.0f;

	float PI = 3.14f;

};
