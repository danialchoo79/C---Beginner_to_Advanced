/*
==========================================================
Description: Challenge (Movies).

Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
    Note:
        To compile, use this:
        g++ -o movies main.cpp movie.cpp movies.cpp
        
*/

#include <iostream>
#include "Movies.h"

// Function Prototypes
void increment_watched(Movies &movies, string movie_name);
void add_movie(Movies &movies, string movie_name, string movie_rating, int times_watched);

// Helper Functions
void increment_watched(Movies &movies, string movie_name)
{
    if(movies.increment_watched(movie_name))
        cout<<movie_name<<" watch incremented."<<endl;
    else
        cout<<movie_name<<" not found."<<endl;
}

void add_movie(Movies &movies, string movie_name, string movie_rating, int times_watched)
{
    if(movies.add_movie(movie_name,movie_rating,times_watched))
        cout<<movie_name<<" added."<<endl;
    else
        cout<<movie_name<<" already exists."<<endl;
}

int main()
{
    Movies my_movies;

    my_movies.display();

    add_movie(my_movies,"Big","PG-13",2);
    add_movie(my_movies,"Star Wars","PG",5);
    add_movie(my_movies,"Cinderella","PG",7);

    my_movies.display();

    add_movie(my_movies,"Cinderella","PG",7);
    add_movie(my_movies, "Ice Age","PG",12);

    my_movies.display();

    increment_watched(my_movies,"Big");
    increment_watched(my_movies,"Ice Age");

    my_movies.display();

    increment_watched(my_movies,"XXX");

   return 0;
    
}