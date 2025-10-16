#include <iostream>
#include <string>
using namespace std;
int main() {
 int choice;
 cout << "Choose exception type to throw:" << endl;
 cout << "1. Integer Exception" << endl;
 cout << "2. Double Exception" << endl;
 cout << "3. String Exception" << endl;
 cout << "Enter choice: ";
 cin >> choice;
 try {
 if (choice == 1) {
 	throw 404; // Integer exception
 }
 else if (choice == 2) {
 throw 3.14; // Double exception
 }
 else if (choice == 3) {
 throw string("Custom string error"); // String exception
 }
 else {
 cout << "No exception thrown." << endl;
 }
 }
 catch (int e) {
 cout << "Caught an integer exception: Error code " << e << endl;
 }
 catch (double e) {
 cout << "Caught a double exception: Value = " << e << endl;
 }
 catch (string &e) {
 cout << "Caught a string exception: Message = " << e << endl;
 }
 cout << "Program continues after exception handling." << endl;
 return 0;
}
