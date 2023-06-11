#include <iostream>

using namespace std;

int main() {
	int number, count;

	cin >> number;
	count = 0; 

	while (number > 0) {
		count += number;
		number -= 1;
	}

	cout << count << "\n";
	return 0;
}