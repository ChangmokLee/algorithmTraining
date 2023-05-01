#include <iostream>

using namespace std;

int main() {
	int hour, minute;

	cin >> hour >> minute;

	if (minute < 45) {
		hour = hour - 1;
		minute = minute + 15;
	}
	else {
		minute -= 45;
	}
	if (hour < 0) {
		hour = 23;
	}
	
	cout << hour << " " << minute << '\n';

	return 0;
}