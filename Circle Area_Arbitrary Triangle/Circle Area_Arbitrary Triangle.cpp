
/* Program To calculate Circle Area  Described Around an Arbitrary Triangle */

#include <iostream>
#include <cmath>
using namespace std;

int main()

{

    double a, b, c;    // ==> a, b, c  is a three Arbitrary Triangle 
    cout << "Please enter the first Arbitrary Triangle " << endl;
    cin >> a;

    cout << "Please enter the second Arbitrary Triangle " << endl;
    cin >> b;

    cout << "Please enter the third Arbitrary Triangle " << endl;
    cin >> c;



    // Calculation and rule 

    const double PI = 3.14159265358979323846;
    double P = (a + b + c) / 2;
    double T = (a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c)));
    double F = T * T;
    double Area = PI * F;

    cout << "The Circle Area is : " << Area << endl;



    return 0;

    // Created by @ilyes_Trabelsi 

}