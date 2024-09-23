#pragma once
#include "movie.h"
const int ROOMSIZE = 7;

class Room{
private:
	int RoomID;
	Seat roomSeats[ROOMSIZE][ROOMSIZE];
	double roomPrice;
	Movie movie;
	int customerID;

public:
	Room();
	Room(int, double);
	~Room();

	void setRoomID(int);
	void setRoomPrice(double);
	void setSeatState(int, int, int);
	int getRoomID();
	double getRoomPrice();
	int getSeatState(int, int);

};

