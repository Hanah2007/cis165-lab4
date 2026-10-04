#include <iostream>
using namespace std;

int main() {
    const double ANNUAL_RATE = 1.5;
    const int YEARS_5 = 5;
    const int YEARS_7 = 7;
    const int YEARS_10 = 10;

    double increase_5 = ANNUAL_RATE * YEARS_5;
    double increase_7 = ANNUAL_RATE * YEARS_7;
    double increase_10 = ANNUAL_RATE * YEARS_10;

    cout << "Ocean level after 5 years: " << increase_5 << " mm" << endl;
    cout << "Ocean level after 7 years: " << increase_7 << " mm" << endl;
    cout << "Ocean level after 10 years: " << increase_10 << " mm" << endl;

    return 0;
}
