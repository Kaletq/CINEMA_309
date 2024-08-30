#include "seat.h"

Seat::Seat() {}
Seat::Seat(int _chairID,bool _chairState) {
	seatID = _chairID; seatState = _chairState;
}
Seat::~Seat() {}

void Seat::setSeatID(int newID) {
	seatID = newID;
}
void Seat::setSeatState(bool newState) {
	seatState = newState;
}
int Seat::getSeatID() { return seatID; }
bool Seat::getSeatState() { return seatState; }