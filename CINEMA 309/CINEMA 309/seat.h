#pragma once
#include <iostream>
#include <string>
#include <random>

using namespace std;

class Seat
{private:
	int seatID;
	int seatState;

public:
	Seat();
	Seat(int, int);
	~Seat();

	void setSeatID(int);
	void setSeatState(int);
	int getSeatID();
	int getSeatState();
};

