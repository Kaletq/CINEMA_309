#pragma once
#include "schedule.h"

class Booking
{
private:
	int bookingSchedule = 0;
	int bookingSeats = 0;
	double bookingPrice = 0;
	int reserveID = 0;
	int userID = 0;

public:
	Booking();
	Booking(int, int, double, int, int);
	~Booking();

	void setBookingSchedule(int);
	void setBookingSeats(int);
	void setBookingPrice(double);
	void setReserveID(int);
	void setUserID(int);
	int getBookingSchedule();
	int getBookingSeats();
	double getBookingPrice();
	int getReserveID();
	int getUserID();
};

