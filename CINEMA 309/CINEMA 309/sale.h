#pragma once
#include "booking.h"

class Sale
{
private:
	Booking bookingUser;
	string customerID;
	string cardNumber;

public:
	Sale();
	Sale(Booking, string, string);
	~Sale();

	void setBookingUser(Booking);
	void setCustomerID(string);
	void setCardNumber(string);

	Booking getBookingUser();
	string getCustomerID();
	string getCardNumber();
};

