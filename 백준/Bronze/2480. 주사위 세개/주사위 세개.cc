#include <iostream>

using namespace std;

int main() {
	int a, b, c, max;

	cin >> a >> b >> c;

	if (a == b && a == c) {
		cout << 10000 + a * 1000 << '\n';
	}
	else if (a == b) {
		cout << 1000 + b * 100 << '\n';
	}
	else if (b == c) {
		cout << 1000 + c * 100 << '\n';
	}
	else if (c == a) {
		cout << 1000 + a * 100 << '\n';
	}
	else {
		if (a > b) {
			if (a > c) {
				cout << a * 100 << '\n';
			}
			else {
				cout << c * 100 << '\n';
			}
		}
		else {
			if (b > c) {
				cout << b * 100 << '\n';
			}
			else {
				cout << c * 100 << '\n';
			}
		}
	}
	
	return 0;
}