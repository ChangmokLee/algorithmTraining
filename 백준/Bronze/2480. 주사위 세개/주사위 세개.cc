#include <iostream>

using namespace std;

int main() {
	int a, b, c;

	cin >> a >> b >> c;

	if (a == b) {
		if (a == c) {
			cout << 10000 + a * 1000 << "\n";
		}
		else {
			cout << 1000 + a * 100 << "\n";
		}
	}
	else if (a == c) {
			cout << 1000 + a * 100 << "\n";
		}
	else if (b == c) {
			cout << 1000 + b * 100 << "\n";
		}
	else {
		int max_value = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
		cout << max_value * 100 << "\n";
	}
	return 0;
}