#include <iostream>
#include <cmath>
#include <set>
using namespace std;

// Function to find integer pairs (a, b) that satisfy the hypotenuse rule
void findHypotenusePairs() {
    int count = 0;
    set<pair<int, int>> uniquePairs;

    // Loop through all possible pairs (a, b)
    for (int a = 2; a < 100; a++) {
        for (int b = a; b < 100; b++) { // Start b from a to avoid (b, a) duplicates
            // Calculate the hypotenuse
            double c = sqrt(a * a + b * b);

            // Check if c is an integer
            if (c == static_cast<int>(c)) {
                // Add the pair to the set of unique pairs
                uniquePairs.insert(make_pair(a, b));
                count++;
            }
        }
    }

    // Print all the pairs found
    cout << "Pairs (a, b) that satisfy the hypotenuse rule:" << endl;
    for (const auto& pair : uniquePairs) {
        cout << "(" << pair.first << ", " << pair.second << ")" << endl;
    }

    // Display the number of pairs found
    cout << "Number of unique pairs found: " << count << endl;
}

int main() {
    findHypotenusePairs();
    return 0;
}
