#include "room.h"

Room::Room(){}
Room::Room(int newRoomID, double newPrice) {
	RoomID = newRoomID;
	roomPrice = newPrice;
}
Room::~Room(){}

void Room::setRoomID(int newRoomID) { RoomID = newRoomID; }
void Room::setRoomPrice(double newPrice) { roomPrice = newPrice; }
void Room::assignMovieToRoom(Movie _assignedMovie, Room selectedRoom) {
	
}

int Room::getRoomID() { return RoomID; }
double Room::getRoomPrice() { return roomPrice; }