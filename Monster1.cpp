#include "Monster1.h"

Monster1::Monster1() {

	name_ = "ゴアマガラ";
	printf("%s がやって來る\n", name_);
}

Monster1::~Monster1() {

	printf("%s は逃げていく\n", name_); }

void Monster1::Born() { 
	
	printf("%s は衰弱している\n", name_);
}
