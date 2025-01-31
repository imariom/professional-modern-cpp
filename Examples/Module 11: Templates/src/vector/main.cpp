#include <iostream>
#include "vector.hpp"

int main()
{
    vector offsets(10); // 10 integers
    vector strides(34); // 34 integers

    // vector of integers
    vector heights{9, 3, 5, 7};

    // subscript operator
    std::cout << heights[0] << std::endl;
    std::cout << heights[3] << std::endl;

    // range-based for loop
    std::cout << std::endl;
    for (auto height : heights)
        std::cout << height << ", ";
    std::cout << std::endl;
}