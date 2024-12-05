#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// - With two lists as the puzzle input, pair up the numbers and measure how far apart they are.
// - Pair up the smallest number in the left list with the smallest number in the right list,
//    then the second-smallest left number with the second-smallest right number, and so on.
// - Within each pair, figure out how far apart the two numbers are; add up all distances.

int main() {
    // 1. Read input and store in two vectors
    std::vector<int> leftList, rightList;
    int left, right;

    // Read input until end of input (Ctrl+D on Unix or Ctrl+Z on Windows)
    while(std::cin >> left >> right) {
        leftList.push_back(left);
        rightList.push_back(right);
    }

    // 2. Sort both lists
    std::sort(leftList.begin(), leftList.end());
    std::sort(rightList.begin(), rightList.end());

    // 3. Calculate the total distance
    int totalDistance = 0;
    for (size_t i = 0; i < leftList.size(); ++i) {
        totalDistance += std::abs(leftList[i] - rightList[i]);
    }

    // 4. Output the result
    std::cout << "Total Distance: " << totalDistance << std::endl;

    return 0;
}