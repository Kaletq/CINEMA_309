#include "cinema.h"

Cinema::Cinema() {}
Cinema::~Cinema(){}

void Cinema::setCinemaMovies(Movie newCinemaMovie){
	for (int i = 0; i < 15; i++) {
		cinemaMovies[i] = newCinemaMovie;
	}
}
void Cinema::setCinemaRooms(Room _cinemaRooms){
	for (int i = 0; i < 15; i++) {
		cinemaRooms[i] = _cinemaRooms;
	}
}
void Cinema::setCinemaSchedules(Schedule _cinemaSchedules){
	for (int i = 0; i < 15; i++) {
		cinemaSchedules[i] = _cinemaSchedules;
	}
}
void Cinema::addMovie() {
	string name, studio, country, duration, reviews, launchYear; int answer;

	for (int i = totalMovies; i < 15; i++) {

		cout << "Ingrese el nombre de la pelicula a agregar: "; cin >> name;
		cout << "Ingrese el estudio creador de la pelicula: "; cin >> studio;
		cout << "Ingrese el pais originario de la pelicula: "; cin >> country;
		cout << "Ingrese la duracion de la pelicula a agregar: "; cin >> duration;
		cout << "Ingrese las reviews con el formato x/10 de la pelicula a agregar: "; cin >> reviews;
		cout << "Ingrese el annio de lanzamiento de la pelicula a agregar"; cin >> launchYear;

		cinemaMovies[i].setName(name);
		cinemaMovies[i].setStudio(studio);
		cinemaMovies[i].setCountry(country);
		cinemaMovies[i].setDuration(duration);
		cinemaMovies[i].setReviews(reviews);
		cinemaMovies[i].setLyear(launchYear);

		cout << "Si desea agregar una nueva pelicula, digite 1. Si no, digite 2: "; cin >> answer;
		if (answer == 1) {};
		if (answer == 2) { i = 15; }
		if (answer != 1 and answer != 2) { cout << "Por favor, digite su respuesta correctamente: "; }

		totalMovies += 1;
	}
}