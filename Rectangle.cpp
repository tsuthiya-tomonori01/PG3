#include "Rectangle.h"
#include<stdio.h>

void Rectangle::Size() {

	Radius = Radius * Radius; 
}

void Rectangle::Draw() { 
	
	printf("%f\n", Radius); 
}
