#pragma once
#include "room.h"

class Schedule
{
private:
	string startTime, finishTime, movieDate, roomNumber, movieName;

public:
	Schedule();
	Schedule(string, string, string, string, string);
	~Schedule();

	void setStartTime(string);
	void setFinishTime(string);
	void setMovieDate(string);
	void setRoomNumber(string);
	void setMovieName(string);
	string getStartTime();
	string getFinishTime();
	string getMovieDate();
	string getRoomNumber();
	string getMovieName();
};

