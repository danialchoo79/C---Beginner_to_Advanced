/*
==========================================================
Description: Menu for arrays.

Compiler: gcc

Author: Danial Choo
==========================================================
*/

#include <iostream>
#include <vector>

using namespace std;

vector <int> menu_vector {};

int main()
{
    char choice {};

    while (1)
    {
        cout<<"P - Print numbers"<<endl;
        cout<<"A - Add a number"<<endl;
        cout<<"M - Display mean of the numbers"<<endl;
        cout<<"S - Display the smallest number"<<endl;
        cout<<"L - Display the largest number"<<endl;
        cout<<"Q - Quit"<<endl;
        cout<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        if(choice=='P' || choice == 'p')
        {
            cout<<"[ ";
            for(auto menu:menu_vector)
            {
                cout<<menu<<" ";
            }
            cout<<" ]"<<endl;

            cout<<endl;
        }

       else if(choice=='A' || choice == 'a')
       {
            int value{};
            cout<<"Enter an integer to store in list: ";
            cin>>value;

            menu_vector.push_back(value);

            cout<<endl;
       }

       else if(choice=='M' || choice == 'm')
       {
            if(menu_vector.size()==0)
            {
                cout<<"Unable to calculate the mean - no data"<<endl;
                cout<<endl;
            }

            else
            {
                double average{0};
                int sum{0};
                int i{0};

                for(i; i<menu_vector.size(); i++)
                {
                    sum = sum + menu_vector.at(i);
                }

                average = static_cast<double>(sum) / i;

                cout<<"The mean is "<<average<<endl;
                cout<<endl;
            }
       }

       else if(choice=='S' || choice =='s')
       {
            if(menu_vector.size() != 0)
            {
                int temp{INT16_MAX};
                for(int i{0};i<menu_vector.size();i++)
                {
                    if (temp > menu_vector.at(i))
                    {
                        temp = menu_vector.at(i);
                    }
                }
                cout<<"The smallest number is "<<temp<<endl;
                cout<<endl;
            }

            else
            {
                cout<<"Unable to determine the smallest number - list is empty";
            }
       }

       else if(choice=='L' || choice =='l')
       {
            if(menu_vector.size() != 0)
            {
                int temp{INT16_MIN};
                for(int i{0};i<menu_vector.size();i++)
                {
                    if (temp < menu_vector.at(i))
                    {
                        temp = menu_vector.at(i);
                    }
                }
                cout<<"The largest number is "<<temp<<endl;
                cout<<endl;
            }

            else
            {
                cout<<"Unable to determine the largest number - list is empty";
            }
       }

       else if(choice=='Q' || choice == 'q')
        {
            cout<<"Goodbye...";
            break;
        }
    }
    return 0;
}