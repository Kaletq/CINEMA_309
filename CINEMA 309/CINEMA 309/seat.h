#pragma once
#include <iostream>
#include <string>

using namespace std;

class Seat
{private:
	int seatID;
	bool seatState;

public:
	Seat();
	Seat(int, bool);
	~Seat();

	void setSeatID(int);
	void setSeatState(bool);
	int getSeatID();
	bool getSeatState();
};

