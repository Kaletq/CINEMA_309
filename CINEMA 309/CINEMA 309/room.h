#pragma once
#include "movie.h"

class Room{
private:
	int RoomID;
	Seat** roomSeats;
	double roomPrice;
	Movie movie;

public:
	Room();
	Room(int, double);
	~Room();

	void setRoomID(int);
	void setRoomPrice(double);

	int getRoomID();
	double getRoomPrice();
	void chargeSeatsPerRoom();
};

