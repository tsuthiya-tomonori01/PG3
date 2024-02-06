#pragma once
class enemy
{
private:
	enum class Phase { 
		approach, 
		shot,
		leave
	};

public:
	void Update();

private:

	void Approach();

	void Shot();

	void Leave();

private:

	Phase phase_ = Phase::approach; 

	static void (enemy::*spPhaseTable[])();
};

