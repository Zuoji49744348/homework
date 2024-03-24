#include <iostream>
using namespace std;

int main() {
    const int NUM_GRADES = 6;
    int gradeCounts[NUM_GRADES] = { 0 }; // Initialize the array to hold counts for each grade

    cout << "Enter the grades for each student (enter -1 to stop):\n";

    int grade;
    while (true) {
        cout << "Enter grade (0-5): ";
        cin >> grade;

        if (grade == -1) // Stop taking input if -1 is entered
            break;

        if (grade >= 0 && grade < NUM_GRADES) {
            gradeCounts[grade]++; // Increment count for the entered grade
        }
        else {
            cout << "Invalid grade entered. Please enter a grade between 0 and 5.\n";
        }
    }

    // Output the histogram count
    for (int i = 0; i < NUM_GRADES; ++i) {
        cout << gradeCounts[i] << " grade(s) of " << i << endl;
    }

    return 0;
}