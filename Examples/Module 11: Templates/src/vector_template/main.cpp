#include <iostream>
#include <string>
#include <list>

#include "vector.hpp"
#include "player.hpp"

void printVector(vector<int>& values) {
    for (int value : values)
        std::cout << value << std::endl;
}

int main()
{
    vector<char> vChars(200); // vector of 200 characters
    vector<std::string> vStrings(17); // vector of 17 strings
    vector<std::list<int>> vLists(45); // vector of 45 lists of integers

    // vector of integers
    vector<int> heights{9, 3, 5, 7};

    // vector of strings
    vector<std::string> slogans {
        "war is peace", "freedom is slavery"
    };

    // vector of players
    vector<Player> players {
        Player{"mario", 34, 99.8f},
        Player{"luigi", 22, 84.5f}
    };

    // subscript operator
    std::cout << heights[0] << std::endl;
    std::cout << heights[3] << std::endl;

    std::cout << slogans[0] << std::endl;
    std::cout << slogans[1] << std::endl;

    std::cout << players[0] << std::endl;

    // function with vector of integers parametere
    printVector(heights);

    // range-based for loop support
    std::cout << "Vector of integers:\n";
    for (auto height : heights)
        std::cout << height << ", ";
    std::cout << std::endl;

    // range-based for loop support
    std::cout << "Vector of Players:\n";
    for (const auto& player : players) {
        std::cout << "\t" << player << std::endl;
    }
}