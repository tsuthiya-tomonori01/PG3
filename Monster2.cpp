#include "Monster2.h"

Monster2::Monster2() {

	name_ = "シャガルマガラ";
	printf("%s がやって來る\n", name_);
}

Monster2::~Monster2() {

	printf("%s は逃げていく\n", name_); }

void Monster2::Born() {

	printf("%s は衰弱している\n", name_);
}
