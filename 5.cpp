#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // Actual PIN number
    const int PIN_LENGTH = 5;
    const int actualPIN[PIN_LENGTH] = { 1, 2, 3, 4, 5 };

    // Seed the random number generator
    srand(time(nullptr));

    // Array to store random numbers assigned to each digit (0-9)
    int randomNumbers[10];
    for (int i = 0; i < 10; ++i) {
        // Generate a random number between 1 and 3 for each digit
        randomNumbers[i] = rand() % 3 + 1;
    }

    // Display the PIN and corresponding random numbers
    cout << "PIN: ";
    for (int i = 0; i < PIN_LENGTH; ++i) {
        cout << actualPIN[i] << " ";
    }
    cout << endl;

    cout << "NUM: ";
    for (int i = 0; i < PIN_LENGTH; ++i) {
        int randomNumber = randomNumbers[actualPIN[i]];
        cout << randomNumber << " ";
    }
    cout << endl;

    // Prompt the user to enter the response
    cout << "Enter your response: ";
    int response[PIN_LENGTH];
    for (int i = 0; i < PIN_LENGTH; ++i) {
        cin >> response[i];
    }

    // Check if the response matches the actual PIN
    bool authenticated = true;
    for (int i = 0; i < PIN_LENGTH; ++i) {
        if (response[i] != actualPIN[i]) {
            authenticated = false;
            break;
        }
    }

    if (authenticated) {
        cout << "Authentication successful!" << endl;
    }
    else {
        cout << "Authentication failed!" << endl;
    }

    return 0;
}
