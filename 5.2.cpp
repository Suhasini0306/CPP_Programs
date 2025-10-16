#include <iostream>
using namespace std;
class Rectangle {
private:
int length;
int width;
public:
// Default constructor
Rectangle() {
length = 0;
width =0;
ADITYA
UNIVERSITY
cout << "Default constructor called." << endl:
}
// Constructor with one parameterRectangle(int 1) {
length =1;
width =1; // making it a square

cout <<"Single-parameter constructor called." << endl;
}
// Constructor with two parameters
Rectangle(int 1, int w) {
length =1;
width = w;
cout << "Two-parameter constructor called." << endl;
}
void area() }
cout <<"Area: " << (length * width) << endl;
}
};
int main() }
}
Rectangle rl; // Calls default constructor
rl.area();
Rectangle r2(5); // Calls single-parameter constructor
r2.area();
Rectangle r3(4, 6); // Calls two-parameter constructor
13.area();
return 0;
}
