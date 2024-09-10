#pragma once
#include "schedule.h"

class Booking
{
private: 
	Schedule bookingSchedule;
	Seat bookingSeats;
	double bookingPrice;
	int reserveID;

public:
	Booking();
	Booking(Schedule, Seat, double, int);
	~Booking();

	void setBookingSchedule(Schedule);
	void setBookingSeats(Seat);
	void setBookingPrice(double);
	void setReserveID(int);

	Schedule getBookingSchedule();
	Seat getBookingSeats();
	double getBookingPrice();
	int getReserveID(); 
};

