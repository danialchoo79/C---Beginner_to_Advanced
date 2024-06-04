#include <iostream>
#include "Movie.h"

using namespace std;

// Implementation of Constructor
Movie::Movie(string movie_name, string movie_rating, int times_watched)
    :movie_name(movie_name), movie_rating(movie_rating), times_watched(times_watched)
{}

// Implementation of Copy Constructor
Movie::Movie(const Movie &source)
    :Movie(source.movie_name, source.movie_rating, source.times_watched)
{}

// Implementation of Destructor
Movie::~Movie()
{}

// Implementation of Display Method
void Movie::display() const
{
    cout<<movie_name<<", "<<movie_rating<<", "<<times_watched<<endl;
}

