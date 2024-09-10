#include "sale.h"

Sale::Sale(){}
Sale::Sale(Booking newBookingUser, string newCustomerID, string newCardNumber) {
	bookingUser = newBookingUser;
	customerID = newCustomerID;
	cardNumber = newCardNumber;
}
Sale::~Sale(){}

void Sale::setBookingUser(Booking newBookingUser) { bookingUser = newBookingUser; }
void Sale::setCustomerID(string newCustomerID) { customerID = newCustomerID; }
void Sale::setCardNumber(string newCardNumber) { cardNumber = newCardNumber; }

Booking Sale::getBookingUser() { return bookingUser; }
string Sale::getCustomerID() { return customerID; }
string Sale::getCardNumber() { return cardNumber; }