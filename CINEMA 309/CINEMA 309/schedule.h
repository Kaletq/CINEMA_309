#pragma once
#include "movie.h"

class Schedule
{
private:
	int startTime;
	int finishTime;
	string day;

public:
	Schedule();
	Schedule(int, int, string);
};

