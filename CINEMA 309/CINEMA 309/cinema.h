#pragma once
#include "sale.h"
class Cinema
{
private:
	Movie cinemaMovies[15];
	Room cinemaRooms[3];
	Schedule cinemaSchedules[25];
	Booking cinemaBookings;
	Sale cinemaSales;
	int totalMovies = 5;

public:
	Cinema();
	~Cinema();

	void setCinemaMovies(Movie);
	void setCinemaRooms(Room);
	void setCinemaSchedules(Schedule);
	void addMovie();
	void showCinemaMovies();
	void prechargeMovies();
};