#include <iostream>

using namespace std;

int main() {
	int hour, minute, time;

	cin >> hour >> minute >> time;

	if (minute + time >= 60) {
		hour = (hour + ((minute + time) / 60)) % 24;
		minute = (minute + time) % 60;
	}
	else {
		minute += time;
	}

	cout << hour << " " << minute;

	return 0;
}