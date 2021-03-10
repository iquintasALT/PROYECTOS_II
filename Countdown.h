#pragma once

class Countdown
{
public:
	Countdown(int totaltime);

	void update();

	bool keepPlaying() { return lefttime > 0; }
private:
	int lefttime;
	int starttime;
	int updatetime;
};

