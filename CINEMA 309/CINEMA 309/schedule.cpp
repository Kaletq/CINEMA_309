#include "schedule.h"

Schedule::Schedule() {}
Schedule::Schedule(string newStart, string newEnd, string newDate) { startTime = newStart; finishTime = newEnd; movieDate = newDate; }
Schedule::~Schedule() {}

void Schedule::setStartTime(string newStartTime) { startTime = newStartTime; }
void Schedule::setFinishTime(string newFinishTime) { finishTime = newFinishTime; }
void Schedule::setMovieDate(string newDate) { movieDate = newDate; }

string Schedule::getStartTime() { return startTime; }
string Schedule::getFinishTime() { return finishTime; }
string Schedule::getMovieDate() { return movieDate; }
