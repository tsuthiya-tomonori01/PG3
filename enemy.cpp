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

	printf("�ڋ�\n");

	enemy::Shot();
}

void enemy::Shot() {

	printf("�ˌ�\n");

	enemy::Leave();
}

void enemy::Leave() {

	printf("���E\n");

}
