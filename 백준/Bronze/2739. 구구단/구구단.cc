#include <iostream>

using namespace std;

int main() {
	int number, count;

	cin >> number;
	count = 1;

	while (count < 10) {
		cout << number << " * " << count << " = " << number * count << "\n";
		count += 1;
	}
	return 0;
}