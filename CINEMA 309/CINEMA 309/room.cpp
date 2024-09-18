#include "room.h"

Room::Room(){}
Room::Room(int newRoomID, double newPrice) {
	RoomID = newRoomID;
	roomPrice = newPrice;
}
Room::~Room(){}

void Room::setRoomID(int newRoomID) { RoomID = newRoomID; }
void Room::setRoomPrice(double newPrice) { roomPrice = newPrice; }

int Room::getRoomID() { return RoomID; }
double Room::getRoomPrice() { return roomPrice; }
void Room::chargeSeatsPerRoom(){
	int rows, columns;
	cout << "Ingrese el numero de filas de la sala: "; cin >> rows;
	cout << "Ingrese el numero de columnas de la sala: "; cin >> columns;
	

}