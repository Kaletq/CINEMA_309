#include "cinema.h"

Cinema::CinemaCinema(Movie , Room, Schedule, Booking, Sale);
Cinema::~Cinema();

void Cinema::setCinemaMovies(Movie);
void Cinema::setCinemaRooms(Room);
void Cinema::setCinemaSchedules(Schedule);

Movie Cinema::getCinemaMovies();
Room Cinema::getCinemaRooms();
Schedule Cinema::getCinemaSchedules();