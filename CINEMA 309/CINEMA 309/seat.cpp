#include "seat.h"

Seat::Seat() {}
Seat::Seat(int _chairID,int _chairState) {
	seatID = _chairID; seatState = _chairState;
}
Seat::~Seat() {}

void Seat::setSeatID(int newID) {
	seatID = newID;
}
void Seat::setSeatState(int newState) {
	seatState = newState;
}
int Seat::getSeatID() { return seatID; }
int Seat::getSeatState() { return seatState; }

