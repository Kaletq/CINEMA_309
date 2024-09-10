#pragma once
#include "seat.h"

class Room{
private:
	int RoomID;
	int seatsPerRoom;
	Seat roomSeats[7][7];
	double roomPrice;

public:
	Room();
	Room(int, int, Seat, double);
	~Room();

	void setRoomID(int);
	void setSeatsPerRoom(int);
	void setRoomPrice(double);

	int getRoomID();
	int getSeatsPerRoom();
	double getRoomPrice();
};

