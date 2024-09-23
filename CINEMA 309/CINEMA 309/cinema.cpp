#include "cinema.h"

Cinema::Cinema() {}
Cinema::~Cinema(){}

void Cinema::setCinemaMovies(Movie newCinemaMovie){
	for (int i = 0; i < 15; i++) {
		cinemaMovies[i] = newCinemaMovie;
	}
}
void Cinema::setCinemaRooms(Room _cinemaRooms){
	for (int i = 0; i < 3; i++) {
		cinemaRooms[i] = _cinemaRooms;
	}
}
void Cinema::setCinemaSchedules(Schedule _cinemaSchedules){
	for (int i = 0; i < 15; i++) {
		cinemaSchedules[i] = _cinemaSchedules;
	}
}
void Cinema::showCinemaMovies() {
	int movieNumber = 1;
	for (int i = 0; i < totalMovies; i++) {
		cout << endl << movieNumber<< ". " << cinemaMovies[i].getName();
		movieNumber += 1;
		cout << endl; cout << endl;
	}
}
void Cinema::addMovie() {
	string name, studio, country, duration, reviews, launchYear;

	for (int i = totalMovies; i < 15; i++) {
		int answer = 0;

		cout << "\n\nIngrese el nombre de la pelicula a agregar: \n";
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); getline(cin, name); cinemaMovies[i].setName(name);

		cout << "\nIngrese el estudio creador de la pelicula: \n";
		getline(cin, studio); cinemaMovies[i].setStudio(studio);

		cout << "\nIngrese el pais originario de la pelicula: \n"; 
		getline(cin, country); cinemaMovies[i].setCountry(country);

		cout << "\nIngrese la duracion de la pelicula a agregar: \n"; 
		getline(cin, duration); cinemaMovies[i].setDuration(duration);

		cout << "\nIngrese las reviews con el formato x/10 de la pelicula a agregar: \n"; 
		getline(cin, reviews); cinemaMovies[i].setReviews(reviews);

		cout << "\nIngrese el annio de lanzamiento de la pelicula a agregar: \n"; 
		getline(cin, launchYear); cinemaMovies[i].setLyear(launchYear);

		cout << "\nSi desea agregar una nueva pelicula, digite 1. Si no, digite 2: "; cin >> answer;
		cout << endl; cout << endl;
		if (answer == 1) {};
		if (answer == 2) { i = 15; }

		totalMovies += 1;
	}
}   
void Cinema::prechargeMovies() {
	cinemaMovies[0] = Movie("DeadPool 2", "Marvel", "Estados Unidos", "2 horas y 7 minutos", "8.6/10", "2024");
	cinemaMovies[1] = Movie("El Libro de Eli","Alcon Entertainment","Estados Unidos","1 hora y 58 minutos","6.8/10","2010");
	cinemaMovies[2] = Movie("Avengers: DoomsDay", "Marvel", "Estados Unidos", "3 horas y 46 minutos", "9.2/10", "2026");
	cinemaMovies[3] = Movie("Memengers: End Gey", "NAZI", "Alemania", "6 años y 7 meses", "12/-10", "1945");
	cinemaMovies[4] = Movie("Barbie The Movie", "Heyday Films, LuckyChap Entertainment, NB / GG Pictures, Mattel Films", "Estados Unidos", "1 hora y 54 minutos", "6.8/10", "2023");
}
void Cinema::createSchedule() {
	string movieName, date, startTime, finishTime;
	int roomNumber;
	
	for (int i = totalSchedules; i < 25; i++) {
		int answer = 0;

		cout << "\nDigite el nombre de la pelicula: \n";
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); getline(cin, movieName); cinemaSchedules[i].setMovieName(movieName);

		cout << "\nDigite la fecha de reproduccion de la pelicula: \n";
		getline(cin, date); cinemaSchedules[i].setMovieDate(date);

		cout << "\nIngrese la hora de inicio de la pelicula: \n";
		getline(cin, startTime); cinemaSchedules[i].setStartTime(startTime);
		
		cout << "\nIngrese la hora de finalizacion de la pelicula: \n";
		getline(cin, finishTime); cinemaSchedules[i].setFinishTime(finishTime);

		cout << "\nIngrese la sala donde se vera la pelicula: \n"; cin >> roomNumber;
		cinemaSchedules[i].setRoomNumber(roomNumber); 

		cout << "\nSi desea agregar un nuevo horario, digite 1. Si no, digite 2: "; cin >> answer;

		cout << endl; cout << endl;
		if (answer == 1) {};
		if (answer == 2) { i = 25; }
		
		totalSchedules += 1;
	}
}
void Cinema::showCinemaSchedulesInfo() {
	int scheduleNumber = 1;
	for (int i = 0; i < totalSchedules; i++) {
		cout << endl << scheduleNumber << "\n\nPelicula: " << cinemaSchedules[i].getMovieName() << endl;
		cout << "Fecha de reproduccion: " << cinemaSchedules[i].getMovieDate() << endl;
		cout << "Hora de inicio: " << cinemaSchedules[i].getStartTime() << endl;
		cout << "Hora de finalizacion: " << cinemaSchedules[i].getFinishTime() << endl;
		cout << "Sala de exhibicion: " <<"Sala #" << cinemaSchedules[i].getRoomNumber() << endl << endl;

		scheduleNumber += 1;
		cout << endl; cout << endl;
	}
}
void Cinema::prechargeCinemaSchedules() {
	cinemaSchedules[0] = Schedule("DeadPool 2", "Miercoles 08 de diciembre", "11:45 AM", "14:20 PM", 1);
	cinemaSchedules[1] = Schedule("Memengers: End Gey", "Miercoles 08 de diciembre", "17:10 PM", "20:45 PM", 1);
	cinemaSchedules[2] = Schedule("DeadPool 2", "Miercoles 08 de diciembre", "17:10 PM", "19:45 PM", 3);
	cinemaSchedules[3] = Schedule("Barbie The Movie", "Miercoles 08 de diciembre", "15:00 PM", "17:00 PM", 2);
	cinemaSchedules[4] = Schedule("El Libro de Eli", "Jueves 09 de diciembre", "10:00 AM", "12:00 MD", 2);
}
void Cinema::createReservation(Cinema comercialCinema){
	int scheduleOption = 0, roomNumber = 0, numberOfSeats = 1, seatRow = 0, seatColumn = 0;
	int customerID = 0, customerTicket = 0;
	double reservationPrice = 0;
	bool validator = true;

	cout << "\nA continuacion, se mostraran todos los horarios disponibles: \n\n";
	comercialCinema.showCinemaSchedulesInfo();
	cout << "\nPor favor, eliga el horario en el que desea hacer una reserva reservar: \n\n"; cin >> scheduleOption;
	
	cout << "\nLas asientos disponibles son los siguientes: \n\n";
	comercialCinema.showSeatStates(cinemaSchedules[scheduleOption - 1].getRoomNumber());
	roomNumber = cinemaSchedules[scheduleOption - 1].getRoomNumber();
	
	while(!validator){
		for (int i = 0; i < numberOfSeats; i++) {
			for (int j = 0; j < numberOfSeats; j++) {
				cout << "Ingrese la fila del asiento que desea reservar: "; cin >> seatRow;
				if (seatRow < 0 || seatRow > ROOMSIZE) {
					cout << "La fila ingresada es invalida. Por favor, ingrese nuevamente la fila del asiento a reservar: ";
					cin >> seatRow;
				}
				cout << "Ingrese la columna del asiento que desea reservar: "; cin >> seatColumn;
				if (seatColumn < 0 || seatColumn > ROOMSIZE) {
					cout << "La columna ingresada es invalida. Por favor, ingrese nuevamente la columna del asiento a reservar: ";
					cin >> seatColumn;
				}
				if (cinemaRooms[roomNumber].getSeatState(seatRow - 1, seatColumn - 1) == 0) {
					int userChoice = 0;
					reservationPrice += 6.49;
					cout << "El precio total de la reservacion es de: $" << reservationPrice << endl;
					cout << "¿Desea reservar el asiento?\n   1. Si, deseo realizar la reserva del asiento\n   2. No, me arrepenti y ya no quiero nada\n"; cin >> userChoice;
					if (userChoice == 1) {
						cinemaRooms[roomNumber - 1].setSeatState(seatRow, seatColumn, 1);
						cout << "Por favor, digite su numero de identificacion: \n"; cin >> customerID;
						customerTicket = comercialCinema.generateCustomerTicket();

						for (int i = 0; i < totalBookings; i++) {
							cinemaBookings[i] = Booking(scheduleOption, numberOfSeats, reservationPrice, customerTicket, customerID);
						}
						cout << "Reservacion realizada exitosamente.\n";
						cout << "ATENCION!!! El siguiente numero es un identificador NECESARIO para validar la compra: " << customerTicket;
						cout << "\nLe pedimos que lo copie / guarde para evitar futuros inconvenientes. \nGracias por su comprension\n\n";
						totalBookings++;
					}
					if (userChoice == 2) {
						cout << "La reservacion ha sido cancelada.\n\n";
					}
				}
				if (cinemaRooms[roomNumber].getSeatState(seatRow, seatColumn) == 1) {
					cout << "El asiento seleccionado ya ha sido reservado.\nPor favor, seleccione otro\n";
					validator = true;
				}
				if (cinemaRooms[roomNumber].getSeatState(seatRow, seatColumn) == 2) {
					cout << "El asiento seleccionado ya ha sido vendido.\nPor favor, seleccione otro\n";
					validator = true;
				}
			}
		}
	}
	
	
}
void Cinema::assignSeatsStates(){
	int rows, columns, seats[ROOMSIZE][ROOMSIZE], i;
	random_device rd;
	mt19937 gen(rd());
	for (i = 0; i < CINEMAROOMS; i++) {
		for (rows = 0; rows < ROOMSIZE; rows++) {
			for (columns = 0; columns < ROOMSIZE; columns++) {
				uniform_int_distribution <> distrib(0, 2);
				seats[rows][columns] = distrib(gen);
				cinemaRooms[i].setSeatState(rows, columns, seats[rows][columns]);
			}
		}
	}

}
void Cinema::showSeatStates(int _cinemaRoom){
	int rows, columns;
	for (rows = 0; rows < ROOMSIZE; rows++) {
		for (columns = 0; columns < ROOMSIZE; columns++) {

			if (cinemaRooms[_cinemaRoom].getSeatState(rows, columns) == 0) {
				cout << " D ";
			}
			if (cinemaRooms[_cinemaRoom].getSeatState(rows, columns) == 1) {
				cout << " R ";
			}
			if (cinemaRooms[_cinemaRoom].getSeatState(rows, columns) == 2) {
				cout << " V ";
			}
		}
		cout << endl;
	}
	cout << "\n\nSimbologia del sistema:";
	cout << "\n\nD = Disponible\n";
	cout << "R = Reservado\n";
	cout << "V = Vendido\n\n";
}
int Cinema::generateCustomerTicket(){
	int bookingID;
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution <> distrib(100000, 999999);
	bookingID = distrib(gen);
	return bookingID;
}
void Cinema::validateSale(Cinema comercialCinema){
	int userID = 0, ticketID = 0, creditCard = 0, securityCode = 0, userChoice = 0;
	bool validator = true;
	cout << "Ingrese el numero de cedula a consultar: " << endl; cin >> userID;		

	while (!validator) {

		for (int i = 0; i < totalBookings; i++) {
			if (cinemaBookings[i].getUserID() != userID) {
				cout << "Este usuario no cuenta con reservas registradas. \n\n";
			}
			else {
				cout << "Ingrese el numero del consecutivo generado en la reserva: " << endl; cin >> ticketID;
				if (cinemaBookings[i].getReserveID() != ticketID) {
					cout << "El numero ingresado no es valido. Intentelo de nuevo. ";
					validator = true;
				}
				else {
					cout << "¿Desea validar la compra? \n   1. Si\n   2. No";
					if (userChoice == 1) {
						cout << "Digite su numero de tarjeta de credito: " << endl; cin >> creditCard;
						cout << "Digite el numero de seguridad de la tarjeta: " << endl; cin >> securityCode;
						cout << "La compra se ha validado correctamente. Gracias por preferir CINEMA 309\n\n";
					}
					else if (userChoice == 2){
						cout << "Se ha cancelado la vaina";
						return;
					}
						

				}
			}
		}

	}
}