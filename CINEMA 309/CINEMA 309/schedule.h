#pragma once
#include "room.h"

class Schedule
{
private:
	string startTime, finishTime, movieDate, movieName;
	int roomNumber;

public:
	Schedule();
	Schedule(string, string, string, string, int);
	~Schedule();

	void setStartTime(string);
	void setFinishTime(string);
	void setMovieDate(string);
	void setRoomNumber(int);
	void setMovieName(string);
	string getStartTime();
	string getFinishTime();
	string getMovieDate();
	int getRoomNumber();
	string getMovieName();
};

