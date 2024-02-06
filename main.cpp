#include "enemy.h"

int main() {

	enemy* enemy_ = new enemy;

	enemy_->Update();

	return 0; 

	delete enemy_;
}