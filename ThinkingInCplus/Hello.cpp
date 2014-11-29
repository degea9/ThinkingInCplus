/*
 * Hello.cpp
 *
 *  Created on: Nov 29, 2014
 *      Author: tuandang
 */
//: C02:Hello.cpp
// Saying Hello with C++
#include <iostream> // Stream declarations
using namespace std;
int stream2();

int main() {
cout << "Hello, World! I am "
<< 8 << " Today!" << endl;
stream2();
}

int stream2(){
	cout << "a number in decimal: "
	<< dec << 15 << endl;
	cout << "in octal: " << oct << 15 << endl;
	cout << "in hex: " << hex << 15 << endl;
	cout << "a floating-point number: "
			<< 3.14159 << endl;
			cout << "non-printing char (escape): "
			<< char(27) << endl;

	return 0;
}

