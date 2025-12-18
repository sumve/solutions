#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int a;
    double b;
    string c;
    
    cin >> a;
    cin >> b;
    cin.ignore();
    getline(cin, c);
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    
    cout << i+a << endl;
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << d+b << endl;
    // Concatenate and print the String variables on a new line
    cout << s + c << endl;
    // The 's' variable above should be printed first.

    return 0;
}