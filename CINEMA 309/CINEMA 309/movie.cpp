#include "movie.h"

Movie::Movie() {}
Movie::Movie(string newName, string newStudio, string newCountry, int newDuration, int newReviews, int newLyear) {
	name = newName;
	studio = newStudio;
	country = newCountry;
	duration = newDuration;
	reviews = newReviews;
	launchYear = newLyear;
}
Movie::~Movie(){}

void Movie::setName(string newName) { name = newName; }
void Movie::setStudio(string newStudio) { studio = newStudio; }
void Movie::setCountry(string newCountry) { country = newCountry; }
void Movie::setDuration(int newDuration) { duration = newDuration; }
void Movie::setReviews(int newReviews) { reviews = newReviews; }
void Movie::setLyear(int newYear) { launchYear = newYear; }

string Movie::getName() { return name; }
string Movie::getStudio() { return studio; }
string Movie::getCountry() { return country; }
int Movie::getDuration() { return duration; }
int Movie::getReviews() { return reviews; }
int Movie::getLyear() { return launchYear; }