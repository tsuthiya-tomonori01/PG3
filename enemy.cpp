#include "enemy.h"
#include <stdio.h>

void (enemy::*enemy::spPhaseTable[])() = {
	&enemy::Approach,
	&enemy::Shot, 
	&enemy::Leave
};

void enemy::Update() {

	(this->*spPhaseTable[static_cast<size_t>(phase_)])();
}

void enemy::Approach() {
	
	printf("Ú‹ß\n");

	phase_ = Phase::shot;
}

void enemy::Shot() {

	printf("ËŒ‚\n");

	phase_ = Phase::leave; 
}

void enemy::Leave() {

	printf("—£’E\n");

}
