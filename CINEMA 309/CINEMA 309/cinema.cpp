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
void Cinema::addMovie() {
	string name, studio, country, duration, reviews, launchYear;

	for (int i = totalMovies; i < 15; i++) {
		int answer = 0;

		cout << "Ingrese el nombre de la pelicula a agregar: \n";
		getline(cin, name); cinemaMovies[i].setName(name);

		cout << "Ingrese el estudio creador de la pelicula: \n";
		getline(cin, studio); cinemaMovies[i].setStudio(studio);

		cout << "Ingrese el pais originario de la pelicula: \n"; 
		getline(cin, country); cinemaMovies[i].setCountry(country);

		cout << "Ingrese la duracion de la pelicula a agregar: \n"; 
		getline(cin, duration); cinemaMovies[i].setDuration(duration);

		cout << "Ingrese las reviews con el formato x/10 de la pelicula a agregar: \n"; 
		getline(cin, reviews); cinemaMovies[i].setReviews(reviews);

		cout << "Ingrese el annio de lanzamiento de la pelicula a agregar: \n"; 
		getline(cin, launchYear); cinemaMovies[i].setLyear(launchYear);

		cout << "Si desea agregar una nueva pelicula, digite 1. Si no, digite 2: "; cin >> answer; cout << endl; cout << endl;
		if (answer == 1) {};
		if (answer == 2) { i = 15; }
		if (answer != 1 and answer != 2) {
			cout << "Por favor, ingrese los datos solicitados. Si desea agregar una nueva pelicula, digite 1, si no, digite 2: \n"; cin >> answer;
		}

		totalMovies += 1;
	}
} 