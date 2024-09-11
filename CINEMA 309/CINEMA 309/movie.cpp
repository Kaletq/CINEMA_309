#include "movie.h"

Movie::Movie() {}
Movie::Movie(string newName, string newStudio, string newCountry, string newDuration, string newReviews, string newLyear) {
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
void Movie::setDuration(string newDuration) { duration = newDuration; }
void Movie::setReviews(string newReviews) { reviews = newReviews; }
void Movie::setLyear(string newYear) { launchYear = newYear; }

string Movie::getName() { return name; }
string Movie::getStudio() { return studio; }
string Movie::getCountry() { return country; }
string Movie::getDuration() { return duration; }
string Movie::getReviews() { return reviews; }
string Movie::getLyear() { return launchYear; }