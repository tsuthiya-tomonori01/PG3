#include "enemy.h"

int main() {

	enemy* enemy_ = new enemy;

	for (int i = 0; i < 3; i++) {

		enemy_->Update();
	}

	return 0; 

	delete enemy_;
}