#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <string>
#include <vector>
#include "Movie.h"

using namespace std;

class Movies
{
    private:
        vector <Movie> movies {};
    
    public:
        // Constructor
        Movies();
        
        // Destructor
        ~Movies();

        bool add_movie(string movie_name, string movie_rating, int times_watched);
        bool increment_watched(string name);
        void display() const;
};

#endif // _MOVIES_H_