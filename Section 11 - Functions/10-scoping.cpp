/*
==========================================================
Description:Basic understanding of scoping.
Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
Note:
- C++ uses static or lexical scope
- local {} - local variables are not preserved btwn fxn calls
- global scope - identifier declared outside fxn / class
- static variables are preserved between fxn calls
*/

#include <iostream>

using namespace std;

void local_example(int);
void global_example();
void static_example();

int num {300}; // Global variable

void local_example(int x)
{
    int num {1000};
    cout<<"\nLocal num is: "<<num<<" in local_example - start"<<endl;
    num = x;
    cout<<"Local num is: "<<num<<" in local_example - end"<<endl;

}

void global_example()
{
    cout<<"\nGlobal num is: "<<num<<" in global_example - start"<<endl;
    num *=2;
    cout<<"Global num is: "<<num<<" in global_example -end"<<endl;
}

void static_example()
{
    static int num {5000}; // upon completion of local scope task - \
                            it retains the value instead of reinitializing it.\
                            Note: Recompiling program will reinitialise it.
    cout<<"\nLocal static num is: "<<num<<" in static_local_example -start"<<endl;
    num += 1000;
    cout<<"Local static num is: "<<num<<" in static_local_example -end"<<endl;
}

int main()
{
    int num {100};
    int num1 {500};

    cout<<"Local num is: "<<num<<" in main"<<endl;

    // Local Scoping
    {
        int num {200};
        cout<<"Local num is: "<<num<<" in the inner block in main"<<endl;
        cout<<"Inner block in main can see out - num1 is: "<<num1<<endl;
    }
    
    cout<<"Local num is: "<<num<<" in main"<<endl;

    local_example(10);
    local_example(20);

    global_example();

    static_example(); // 1st run - updates value
    static_example(); //2nd run - uses the updated value \
                      not reinitialised
    return 0;
}

