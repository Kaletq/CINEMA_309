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
	for (int i = 0; i < totalMovies; i++) {
		cout << cinemaMovies[i].getName();
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