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

void setName(string);
void setStudio(string);
void setCountry(string);
void setDuration(int);
void setReviews(int);
void setLyear(int);

int getName();
int getStudio();
int getCountry();
int getDuration();
int getReviews();
int getLyear();