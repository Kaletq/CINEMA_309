#include "room.h"

Room::Room(){}
Room::Room(int newRoomID, double newPrice) {
	RoomID = newRoomID;
	roomPrice = newPrice;
}
Room::~Room(){}

void Room::setRoomID(int newRoomID) { RoomID = newRoomID; }
void Room::setRoomPrice(double newPrice) { roomPrice = newPrice; }
void Room::setSeatState(int rows, int columns, int seatState){
	roomSeats[rows][columns].setSeatState(seatState);
}
int Room::getRoomID() { return RoomID; }
double Room::getRoomPrice() { return roomPrice; }
int Room::getSeatState(int rows, int columns)
{
	return roomSeats[rows][columns].getSeatState();
}
