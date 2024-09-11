#pragma once
#include "movie.h"

class Room{
private:
	int RoomID;
	int seatsPerRoom = 49;
	Seat roomSeats[7][7];
	double roomPrice;

public:
	Room();
	Room(int, double);
	~Room();

	void setRoomID(int);
	void setRoomPrice(double);
	void assignMovieToRoom(Movie, Room);

	int getRoomID();
	double getRoomPrice();
};

