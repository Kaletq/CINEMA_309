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
	string movieName, date, startTime, finishTime, roomNumber;
	
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

		cout << "\nIngrese la sala donde se vera la pelicula: \n";
		getline(cin, roomNumber); cinemaSchedules[i].setRoomNumber(roomNumber);

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
		cout << "Sala de exhibicion: " << cinemaSchedules[i].getRoomNumber() << endl << endl;

		scheduleNumber += 1;
		cout << endl; cout << endl;
	}
}
void Cinema::prechargeCinemaSchedules() {
	cinemaSchedules[0] = Schedule("DeadPool 2", "Miercoles 08 de diciembre", "11:45 AM", "14:20 PM", "Sala #1");
	cinemaSchedules[1] = Schedule("Memengers: End Gey", "Miercoles 08 de diciembre", "17:10 PM", "20:45 PM", "Sala #1");
	cinemaSchedules[2] = Schedule("DeadPool 2", "Miercoles 08 de diciembre", "17:10 PM", "19:45 PM", "Sala #3");
	cinemaSchedules[3] = Schedule("Barbie The Movie", "Miercoles 08 de diciembre", "15:00 PM", "17:00 PM", "Sala #2");
	cinemaSchedules[4] = Schedule("El Libro de Eli", "Jueves 09 de diciembre", "10:00 AM", "12:00 MD", "Sala #2");
}
void Cinema::createReservation(Cinema comercialCinema){
	int movieOption;

	cout << "\n\nPeliculas disponibles en cartelera: \n";
	comercialCinema.showCinemaMovies();
	cout << "\nDigite el numero de la pelicula que desea reservar: \n";
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); cin >> movieOption;

	comercialCinema.showCinemaSchedulesInfo();
	//comercialCinema.showSeatStates();

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