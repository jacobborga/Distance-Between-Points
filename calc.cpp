/* 
    Program prompts user to enter two points in the form (x1, y1) and (x2, y2) and finds the
        distance between the twi points using a function.
    Algorithm steps:
    1.Define a function called findDistance(...) that taked four parameters x1, y1 and x2
        y2 as two points
        a. finds the distance between them using the equation: √ ((x2-x1)^2 + (y2-y1)^2) !!!
        b. returns the calculated distance value
    2. prompt user to enter four numbers
    3. Convert the values into float and store them into variables
    4. call function getDistance by passing 4 entered numbers as arguments
    5. display results with proper description. Format output numbers to 2 decimal points.
    6. Test and validate that program output is correct for a given set of input points
    7. BONUS - (10 points) Using a loop repeat step 2-6 until the user wants to quit.
*/

#include <iostream>
#include <cstdio>
#include <cassert>
#include <cmath>
#include <iomanip>
using namespace std;

float i = 2.236070;
const float epsilon = 1e-6;
/* 0.000001 accuracy up to 6 decimal points
        Function prototypes
        Function that calculates the distance between two points
        x1, y1, x2, y2 and returns the calculated value */
double findDistance(int, int, int, int);
//test function that runs automated testing

void test();

int main() {
    do {
        int x1, y1, x2, y2;
        // variables th store two points (x1, y1) and (x2, y2)
        char ch;
        //FIXME - 10 bonus points - add loop until user wants to quit

        system("cls");
        cout << "Program calculates distance between 2 points on a 2d coordinates." << endl;
        cout << "Enter a point in the form (x, y): ";
        // parse the input stream

        cin >> ch >> x1 >> ch >> y1 >> ch;
        // value stored in ch is ignored

        printf("(x1, y1) = (%d, %d)\n", x1, y1);
        cout << "Enter a second point in the form (x, y): ";
        cin >> ch >> x2 >> ch >> y2 >> ch;
        // value stored in ch is ignored

        printf("(x2, y2) = (%d, %d)\n", x2, y2);
        test();
        cout << "The Distance between (x1, y1) and (x2, y2) is: " << setprecision(6) << fixed << findDistance(x1, y1, x2, y2) << endl;
        /* FIXME - call findDistance function passing proper arguments
        FIXME - Using printf function display the returned distance with proper description */

        cin.ignore(1000, '\n');
        cin.get();
    } while (1);
    return 0;
}

double findDistance(int x1, int y1, int x2, int y2) {
    // FIXME - Find the distance between (x1, y1) and (x2, y2)
    // following the algorithm step 1
    // return the calculated distance
    float distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return distance;
}

void test() {
    assert(findDistance(4, 3, 5, 1) - i <= epsilon);
    assert(findDistance(5, 2, 6, 3) - i <= epsilon);
    assert(findDistance(6, 1, 7, 2) - i <= epsilon);
    cout << "all tests passed..." << endl;
}
