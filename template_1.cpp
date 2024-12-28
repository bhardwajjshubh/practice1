/* A Template is a very simple yet very powerful tool in C++ .
The simple ide a to pass  data type as a parameter so that we don't need tow write the same code for diff data type .

C++ adds the two keyword to support the template : 1. template  2. typename
The 2nd keyword is always replaced by the keyword 'class'

It is written in two types
1. function Template (generic function)--> it is used for diff data type
example-> sort() , max(), min(), printArray().

2. class Template   --> it is like function template, it is useful when a class defines somethings that is independent of the datatypes .
--> It can be useful for like LinkedList , BinaryTree, Stack , Queue, Arrayetc.

*/

// Function Template
#include <iostream>
using namespace std;
template <class x> // here x is palceholder 
x greater_no(x a, x b)
{
    if (a > b)
    {
        return a;
    }
    else
        return b;
}

int main()
{
    cout << greater_no(82, 45);
    return 0;
}