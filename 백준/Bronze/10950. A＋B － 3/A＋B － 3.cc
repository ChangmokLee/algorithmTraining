#include <iostream>

using namespace std;

int main() {
	int count;
	int number1, number2;

	cin >> count;

	while (count > 0) {
		cin >> number1 >> number2;
		cout << number1 + number2 << "\n";
		count -= 1;
	}

	return 0;
}