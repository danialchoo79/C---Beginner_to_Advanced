/*
==========================================================
Description:Basic usage of vectors.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <char> vowels {'a','e','i','o','u'};

    cout<<vowels[0]<<endl;
    cout<<vowels[4]<<endl;

    vector <int> test_scores {100,98,99};

    cout<<endl<<test_scores[0]<<endl;
    cout<<test_scores[1]<<endl;
    cout<<test_scores[2]<<endl;

    cout<<endl<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
    cout<<test_scores.size()<<endl;

    cout<<endl;
    cout<<"Enter test_scores : "<<endl;
    cin>>test_scores.at(0);
    cin>>test_scores.at(1);
    cin>>test_scores.at(2);

    cout<<endl<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;

    cout<<"\nEnter a test score to add to vector: ";

    int score_to_add {0};
    cin>>score_to_add;

    test_scores.push_back(score_to_add);

    cout<<"\nEnter one more test score to add to the vector: ";

    cin>>score_to_add;

    test_scores.push_back(score_to_add);

    cout<<"Test scores are now: "<<test_scores.at(0)<<" and "<<test_scores.at(1)<<endl;

    // 2D Vector

    vector <vector<int>> movie_rating
    {
        {1,2,3,4},
        {1,2,4,4},
        {1,3,4,5}
    };

    cout<<endl<<"(Array Syntax) Movie_ratings for first row: "<<endl;
    cout<<movie_rating[0][0]<<endl;
    cout<<movie_rating[0][1]<<endl;
    cout<<movie_rating[0][2]<<endl;
    cout<<movie_rating[0][3]<<endl;

    cout<<endl<<"(Vector Syntax) Movie_ratings for first row: "<<endl;
    cout<<movie_rating.at(0).at(0)<<endl;
    cout<<movie_rating.at(0).at(1)<<endl;
    cout<<movie_rating.at(0).at(2)<<endl;
    cout<<movie_rating.at(0).at(3)<<endl;

    cout<<endl<<"Challenge"<<endl;

    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout<<"Elements in vector 1: "<<endl;
    cout<<vector1.at(0)<<" "<<vector1.at(1)<<" and the size is "<<vector1.size()<<endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout<<"Elements in vector 2: "<<endl;
    cout<<vector2.at(0)<<" "<<vector2.at(1)<<" and the size is "<<vector2.size();

    vector <vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout<<endl<<"Vector 2d elements: ";
    cout<<vector_2d.at(0).at(0);
    cout<<" "<<vector_2d.at(0).at(1);
    cout<<" "<<vector_2d.at(1).at(0);
    cout<<" "<<vector_2d.at(1).at(1)<<endl;

    vector1.at(0) = 1000;

    cout<<endl<<"Vector 2d elements: ";
    cout<<vector_2d.at(0).at(0);
    cout<<" "<<vector_2d.at(0).at(1);
    cout<<" "<<vector_2d.at(1).at(0);
    cout<<" "<<vector_2d.at(1).at(1)<<endl;

    cout<<endl<<"Vector 1 elements: "<<endl;
    cout<<vector1.at(0)<<" "<<vector1.at(1)<<endl;


    









    













    return 0;
}