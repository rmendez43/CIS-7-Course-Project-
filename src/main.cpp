#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// Function to calculate the total distance of a given path
int calculateDistance(const vector<vector<int>>& distances, const vector<int>& path) {
    int totalDistance = 0;
    for (size_t i = 0; i < path.size() - 1; ++i) {
        totalDistance += distances[path[i]][path[i + 1]];
    }
    return totalDistance;
}

int main() {
    // Define city names for display
    vector<string> cities = {"Riverside", "Moreno Valley", "Perris", "Hemet"};

    // Adjacency matrix representing distances between cities
    vector<vector<int>> distances = {
        {0, 16, 24, 33}, // Distances from Riverside
        {16, 0, 18, 26}, // Distances from Moreno Valley
        {24, 18, 0, 30}, // Distances from Perris
        {33, 26, 30, 0}  // Distances from Hemet
    };

    // Start city is Riverside (index 0)
    int startCity = 0;

    // Cities to visit (indices 1, 2, 3)
    vector<int> citiesToVisit = {1, 2, 3};

    // Variables to track the shortest path and its distance
    vector<int> shortestPath;
    int shortestDistance = INT_MAX;

    // Generate all permutations of the cities to visit
    do {
        // Create the full path starting and ending at the startCity
        vector<int> currentPath = {startCity};
        currentPath.insert(currentPath.end(), citiesToVisit.begin(), citiesToVisit.end());
        currentPath.push_back(startCity);

        // Calculate the total distance of the current path
        int currentDistance = calculateDistance(distances, currentPath);

        // Update the shortest path if the current one is shorter
        if (currentDistance < shortestDistance) {
            shortestDistance = currentDistance;
            shortestPath = currentPath;
        }
    } while (next_permutation(citiesToVisit.begin(), citiesToVisit.end()));

    // Output the adjacency matrix
    cout << "Adjacency Matrix (Distances):\n";
    for (const auto& row : distances) {
        for (int distance : row) {
            cout << distance << " ";
        }
        cout << "\n";
    }

    // Output the shortest path and its distance
    cout << "\nShortest Path: ";
    for (int city : shortestPath) {
        cout << cities[city] << " -> ";
    }
    cout << cities[shortestPath[0]] << "\n"; // Loop back to start
    cout << "Shortest Distance: " << shortestDistance << "\n";

    return 0;
}
