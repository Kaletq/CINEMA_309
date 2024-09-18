#include "schedule.h"

Schedule::Schedule() {}
Schedule::Schedule(string newMovieName, string newDate, string newStart, string newEnd, string newRoomNumber) {
	movieName = newMovieName;
	movieDate = newDate;
	startTime = newStart;
	finishTime = newEnd;
	roomNumber = newRoomNumber;
}
Schedule::~Schedule() {}

void Schedule::setStartTime(string newStartTime) { startTime = newStartTime; }
void Schedule::setFinishTime(string newFinishTime) { finishTime = newFinishTime; }
void Schedule::setMovieDate(string newDate) { movieDate = newDate; }
void Schedule::setRoomNumber(string newRoomNumber) {roomNumber = newRoomNumber;}
void Schedule::setMovieName(string newMovieName) { movieName = newMovieName; }
string Schedule::getStartTime() { return startTime; }
string Schedule::getFinishTime() { return finishTime; }
string Schedule::getMovieDate() { return movieDate; }
string Schedule::getRoomNumber() { return roomNumber; }
string Schedule::getMovieName() { return movieName; }
