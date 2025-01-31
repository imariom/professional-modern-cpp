#include <iostream>
#include "array.hpp"

struct Player {};

int main()
{
    array<int, 4> heights {1, 2, 3, 4}; // an array of 4 integers
    array<std::string, 3> slogans; // an array of 3 strings
    array<Player, 3> players; // an array of 3 players

    // Create an array of integers and access each element
    array<int, 5> values{1, 2, 3, 4, 5};

    for (int i = 0; i != values.size(); ++i)
        std::cout << values[i] << ", ";
    std::cout << '\n';

    // array stores it's elements where it is stored it is not a handle
    // array needs to receive it's Non-Type template argument at compile time
    // array is an abstract/improved version of the C/C++ T[Size] array
}