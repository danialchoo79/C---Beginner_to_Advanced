#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>
#include <vector>

using namespace std;

class Movie
{
    private:
        string movie_name;
        string movie_rating;
        int times_watched;
        int watch_count;
        
    public:
        // Constructor - all 3 movie attributes
        Movie(string movie_val, string rating_val, int watched_val);

        // Copy Constructor
        Movie(const Movie &source);

        // Getters and Setters for Private Attributes
        void set_name(string movie_name)
        {
            this->movie_name = movie_name;
        }

        string get_name() const
        {
            return movie_rating;
        }

        void set_rating(string movie_rating)
        {
            this->movie_rating = movie_rating;
        }

        string get_rating() const
        {
            return movie_rating;
        }

        void set_times_watched(int times_watched)
        {
            this->times_watched = times_watched;
        }

        int get_times_watched() const
        {
            return times_watched;
        }

        // Increment watched by 1
        void increment_watched()
        {
            ++times_watched;
        }

        // Displays movie info using format: \
           Name, Rating, Times Watched
        void display() const;
};

#endif // _MOVIE_H_