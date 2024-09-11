#pragma once
#include "seat.h"

class Movie
{
private:
	string name;
	string studio;
	string country;
	string duration;
	string reviews;
	string launchYear;

public:
	Movie();
	Movie(string, string, string, string, string, string);
	~Movie();

	void setName(string);
	void setStudio(string);
	void setCountry(string);
	void setDuration(string);
	void setReviews(string);
	void setLyear(string);

	string getName();
	string getStudio(); 
	string getCountry();
	string getDuration();
	string getReviews();
	string getLyear();
	string getMovieInfo();
	

};

