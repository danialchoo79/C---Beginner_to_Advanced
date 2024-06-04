/*
==========================================================
Description:Basic understanding of Function Calls.
Compiler: gcc

Author: Danial Choo
==========================================================
*/

/*
Notes (Stack):
1. Stack is LIFO.
2. Uses Push and Pop Methods.
3. Has a Stack Frame / Activation Record
4. Stack size is Finite. Possibility of Stack Overflow.
5. Increases upwards by pushing into stack then decreases 
   by popping off the stack
*/

/*
Notes (Memory Architecure - Virtual):
1. Heap / Free Store
2. Stack
3. Static Variables
4. Code Area - Main, function calls etc.
*/

/*
Notes (Inline Functions)
1. Fxn Calls have overhead
2. Suggest Compiler to compiler simple functions 'inline'
3. Usually used in header files as it must be available to
   source files that uses it.
*/

#include <iostream>

using namespace std;

void func2(int &x, int y, int z)
{
    x += y+z;
}

int func1(int a,int b)
{
    int result{};
    result = a + b;
    func2(result,a,b);
    return result;
}

int main()
{
    int x{10};
    int y{20};
    int z{};

    z = func1(x,y);
    cout<<z<<endl;
   
    return 0;
}

