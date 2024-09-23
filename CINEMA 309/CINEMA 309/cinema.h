#pragma once
#include "sale.h"
const int CINEMAROOMS = 3;
class Cinema
{
private:
	Movie cinemaMovies[15];
	Room cinemaRooms[CINEMAROOMS];
	Schedule cinemaSchedules[25];
	Booking cinemaBookings[100];
	Sale cinemaSales;
	int totalMovies = 5;
	int totalSchedules = 5;
	int totalBookings = 0;

public:
	Cinema();
	~Cinema();

	void setCinemaMovies(Movie);
	void setCinemaRooms(Room);
	void setCinemaSchedules(Schedule);
	void addMovie();
	void showCinemaMovies();
	void prechargeMovies();
	void createSchedule();
	void showCinemaSchedulesInfo();
	void prechargeCinemaSchedules();
	void createReservation(Cinema);
	void assignSeatsStates();
	void showSeatStates(int cinemaRoom);
	int generateCustomerTicket();
	void validateSale(Cinema);
};