#include "booking.h"

Booking::Booking(){}
Booking::Booking(Schedule newBookingSchedule, Seat newBookingSeats, double newBookingPrice, int newReserveID) {
	bookingSchedule = newBookingSchedule;
	bookingSeats = newBookingSeats;
	bookingPrice = newBookingPrice;
	reserveID = newReserveID;
}
Booking::~Booking(){}

void Booking::setBookingSchedule(Schedule _bookingSchedule) { bookingSchedule = _bookingSchedule; }
void Booking::setBookingSeats(Seat _bookingSeats) { bookingSeats = _bookingSeats; }
void Booking::setBookingPrice(double newPrice) { bookingPrice = newPrice; }
void Booking::setReserveID(int newReserveID) { reserveID = newReserveID; }

Schedule Booking::getBookingSchedule() { return bookingSchedule; }
Seat Booking::getBookingSeats() { return bookingSeats; }
double Booking::getBookingPrice() { return bookingPrice; }
int Booking::getReserveID() { return reserveID; }