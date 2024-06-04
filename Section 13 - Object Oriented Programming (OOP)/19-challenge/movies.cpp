#include <iostream>
#include "Movies.h"

// No-Args Constructor
Movies::Movies()
    :movies{movies}
{}

// Movies Destructor
Movies::~Movies()
{}

bool Movies::add_movie(string movie_name, string movie_rating, int times_watched)
{
    for (const Movie &movie:movies)
    {
        if(movie.get_name() == movie_name)
            return false;
    }
    Movie temp {movie_name, movie_rating,times_watched};
    movies.push_back(temp);
    return true;
}

bool Movies::increment_watched(string movie_name)
{
   for(Movie &movie:movies)
   {
        if(movie.get_name() == movie_name)
            movie.increment_watched();
            return true;
   }
   return false;
}

void Movies::display() const
{
    if(movies.size() == 0)
    {
        cout<<"Sorry, no movies to display.\n"<<endl;
    }
    else
    {
        cout<<"\n========================================"<<endl;
        for(const auto &movie:movies)
            movie.display();
        cout<<"\n========================================"<<endl;
    }

}