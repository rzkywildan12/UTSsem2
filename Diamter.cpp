#include <iostream>
#include <iomanip>  // for std::setprecision
using namespace std;

int main() {
    double radius = 5.0;
    double diameter = 2 * radius;
    double circumference = 2 * 3.14159 * radius;
    double area = 3.14159 * radius * radius;

    cout << fixed << setprecision(4);  // Set precision to 4 decimal places
    cout << "diameter = " << diameter << endl;
    cout << "circumference = " << circumference << endl;
    cout << "area = " << area << endl;

    return 0;
}
