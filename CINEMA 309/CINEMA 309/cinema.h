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

	void setCinemaMovies(Movie);
	void setCinemaRooms(Room);
	void setCinemaSchedules(Schedule);

	Movie getCinemaMovies();
	Room getCinemaRooms();
	Schedule getCinemaSchedules();
};

