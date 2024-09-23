#include "booking.h"

Booking::Booking(){}
Booking::Booking(int newBookingSchedule, int newBookingSeats, double newBookingPrice, int newReserveID, int newUserID) {
	bookingSchedule = newBookingSchedule;
	bookingSeats = newBookingSeats;
	bookingPrice = newBookingPrice;
	reserveID = newReserveID;
	userID = newUserID;
}
Booking::~Booking(){}

void Booking::setBookingSchedule(int _bookingSchedule) { bookingSchedule = _bookingSchedule; }
void Booking::setBookingSeats(int _bookingSeats) { bookingSeats = _bookingSeats; }
void Booking::setBookingPrice(double newPrice) { bookingPrice = newPrice; }
void Booking::setReserveID(int newReserveID) { reserveID = newReserveID; }
void Booking::setUserID(int newUserID) { userID = newUserID; }

int Booking::getBookingSchedule() { return bookingSchedule; }
int Booking::getBookingSeats() { return bookingSeats; }
double Booking::getBookingPrice() { return bookingPrice; }
int Booking::getReserveID() { return reserveID; }
int Booking::getUserID(){ return userID; }
