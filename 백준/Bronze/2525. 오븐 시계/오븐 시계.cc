#include <iostream>

using namespace std;

int main() {
	int hour, minute, time;
	cin >> hour >> minute >> time;

	minute += time;

	if (minute > 59) {
		hour += minute / 60;
		minute = minute % 60;
		if (hour > 23) {
			hour -= 24;
		}
	}

	cout << hour << " " << minute << endl;
	return 0;
}