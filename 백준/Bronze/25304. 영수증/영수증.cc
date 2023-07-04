#include <iostream>

using namespace std;

int main() {
	int total_price, total_number, each_price, each_number, result, total_result;

	cin >> total_price >> total_number;
	total_result = 0;

	while (total_number > 0) {
		cin >> each_price >> each_number;

		result = each_price * each_number;
		total_result += result;

		total_number -= 1;
	}

	if (total_result == total_price)
	{
		cout << "Yes" << "\n";
	}
	else {
		cout << "No" << "\n";
	}

	return 0;
}