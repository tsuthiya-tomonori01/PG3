#include "Circle.h"
#include<stdio.h>

void Circle::Size() {

	Radius = Radius * Radius * PI; 
}

void Circle::Draw() {

	printf("%f\n", Radius); 
}
