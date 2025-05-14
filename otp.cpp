#include <iostream>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()
#include <string>
#include <sstream>  // For stringstream

using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator

    const int OTP_LENGTH = 6;
    string otp = "";
    int digit;

    // Generate OTP
    cout << "Your OTP is: ";
    for (int i = 0; i < OTP_LENGTH; i++) {
        digit = rand() % 10;  // Random digit 0-9
        
        // Convert integer to string using stringstream
        stringstream ss;
        ss << digit;
        otp += ss.str();  // Append digit to the OTP string
    }

    cout << otp << endl;

    // Verifying OTP
    cout << "\nEnter the OTP to verify: ";
    string input;
    cin >> input;

    // Check if input matches the generated OTP
    if (input == otp) {
        cout << "OTP Verified Successfully!" << endl;
    } else {
        cout << "Invalid OTP!" << endl;
    }

    return 0;
}

