#pragma once
#include "room.h"

class Schedule
{
private:
	string startTime;
	string finishTime;
	string movieDate;

public:
	Schedule();
	Schedule(string, string, string);
	~Schedule();

	void setStartTime(string);
	void setFinishTime(string);
	void setMovieDate(string);

	string getStartTime();
	string getFinishTime();
	string getMovieDate();
};

