#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	string output;
	int key;

	while (true) {
		cout << "enter a shift key: ";
		cin >> key;
		cin.ignore();
		cout << "enter a string: ";
		getline(cin, input);

		int in_length = input.length();

		if (key > 26)
			key = key % 26;


		int fix = 0;

		for (int i = 0; i < in_length; i++) {
			if ((input[i] > 64 && input[i] < 91) || (input[i] > 96 && input[i] < 123)) {
				if ((input[i] + key) > 122 || ((input[i] + key) > 90 && (input[i] + key) < 97)) {
					fix = input[i] + key - 26;
					input[i] = fix;
				}
				else {
					input[i] += key;
				}
			}
		}

		output = input;
		cout << output << endl;
	}
}

