#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

// Declare second integer, double, and String variables.
    int i1;
    double d1;
    string s1;
    
    
    // Read and save an integer, double, and String to your variables.
    cin>>i1;
    cin>>d1;
    cin.ignore();
    std::getline(std::cin,s1);
    
    // Print the sum of both integer variables on a new line.
    cout<<i1+i<<endl;
    // Print the sum of the double variables on a new line.
    
    cout<<fixed<<setprecision(1)<<d+d1<<endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout<<s+s1<<endl;

    return 0;
}
