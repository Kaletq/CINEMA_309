#pragma once
#include "room.h"

class Movie
{
private:
	string name;
	string studio;
	string country;
	int duration;
	int reviews;
	int launchYear;

public:
	Movie();
	Movie(string, string, string, int, int, int);
	~Movie();

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


};

