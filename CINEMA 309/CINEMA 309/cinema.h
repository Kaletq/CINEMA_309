#pragma once
#include "sale.h"
class Cinema
{
private:
	Movie cinemaMovies[15];
	Room cinemaRooms[12];
	Schedule cinemaSchedules[30];

public:
	Cinema(Movie, Room, Schedule, Booking, Sale);
	~Cinema();
};

