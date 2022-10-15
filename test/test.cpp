#include "test.h"
#include "../index.h"
#include "termcolor.hpp"

#include <iostream>
#include <string>

using namespace std;

string boolString(bool value) {
	return value ? "true" : "false";
}

struct Option {
		int toBe;
		std::string str;
};

Option options[] = {
		{
				13,
				"-1ge!fd2EYFcxwA3EWTX&^4#%BSD5"
		},
		{
				20,
				"gsa2412!412fy43gngfFDas!$#^$dcv_f-3#!!"
		},
		{
				22,
				"-77w234fs@#12SDFh^23AS14!!'ee-"
		},
		{
				38,
				"-743Dgds@4-dgga9352dfDsfsa357Znm"
		},
		{
				5,
				"Helwf2-4214Dxdh"
		},
		{
				0,
				"opopop"
		}
};

void printGreen(const string& test, const string& result) {
	cout << termcolor::green << "TEST " << "\"" << test << "\"" << " PASSED! RESULT: " << result << endl;
}

void printRed(const string& test, const string& expected, const string& result) {
	cout << termcolor::red << "TEST " << "\"" << test << "\"" << " FAILED! EXPECTED: \"" << expected << "\" INSTEAD OF " << result << "!" << endl;
}

void test() {
	cout << endl;

	int optionsLength = sizeof(options) / sizeof(options[0]);

	for (int i = 0; i < optionsLength; i++) {
		Option option = options[i];

		int result = sumString(option.str);

		string testStr = option.str;

		if (result == option.toBe) {
			printGreen(testStr, to_string(result));
		} else {
			printRed(testStr, to_string(option.toBe), to_string(result));
		}

		cout << endl;
	}
}