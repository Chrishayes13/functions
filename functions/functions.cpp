// functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#define PI 3.141592

using namespace std;

int calculateRadius(float x1, float x2, float y1, float y2);
int calculateArea(float radius);
int calculatePerimeter(float radius);

int main()
{
    float x1;
    float x2;
    float y1;
    float y2;

    cout << "Please enter the first X Coordinate: " << endl;
    cin >> x1;
    cout << "Please enter the first Y Coordinate: " << endl;
    cin >> y1;

    cout << "Please enter the second X Coordinate: " << endl;
    cin >> x2;
    cout << "Please enter the second Y Coordinate: " << endl;
    cin >> y2;

    cout << "The radius of the circle is: " << calculateRadius(x1, x2, y1, y2) << endl;
    cout << "The diameter of the circle is: " << endl;
    cout << "The cirfumference of the circle is: " << calculatePerimeter(x1) << endl;
    cout << "The area of the circle is: " << calculateArea(x1) << endl;

    system("pause");
    return 0;
}

int calculateRadius(float x1, float x2, float y1, float y2)
{
    float distance;
    float radius;

    distance = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));

    radius = (distance / 2);

    return radius;
}

int calculateArea(float radius)
{
    float area;

    area = PI * pow(radius, 2);

    return area;
}

int calculatePerimeter(float radius)
{
    float perimeter;

    perimeter = 2 * PI * radius;

    return perimeter;
}



