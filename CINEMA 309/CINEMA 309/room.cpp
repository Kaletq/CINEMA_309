#include "room.h"

Room::Room(){}
Room::Room(int newRoomID, int newSeatsPerRoom, Seat newRoomSeats, double newPrice) {
	RoomID = newRoomID;
	seatsPerRoom = newSeatsPerRoom;
	//roomSeats = newRoomSeats;
	roomPrice = newPrice;

}
Room::~Room(){}

void Room::setRoomID(int newRoomID) { RoomID = newRoomID; }
void Room::setSeatsPerRoom(int newSeatsPerRoom) { seatsPerRoom = newSeatsPerRoom; }
void Room::setRoomPrice(double newPrice) { roomPrice = newPrice; }

int Room::getRoomID() { return RoomID; }
int Room::getSeatsPerRoom() { return seatsPerRoom; }
double Room::getRoomPrice() { return roomPrice; }