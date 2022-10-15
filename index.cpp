#include <iostream>
#include <string>
#include <cmath>

int sumString(const std::string& str) {
	int sum = 0;
	int negative = false;

	for (int i = 0; i < str.length(); ++i) {
		int code;

		if (str[i] >= 48 && str[i] <= 57) {
			code = str[i] - '0';
		} else if (str[i] == 45) {
			negative = true;
			continue;
		} else {
			negative = false;
			continue;
		}

		if (negative) {
			code *= -1;
			negative = false;
		}

		sum += code;
	}

	return sum;
}
