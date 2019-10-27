#include <iostream>
#include <string>
using namespace std;

bool check(int i, string input) {

	bool check = true;

	for (int j = 0; j < i; j++) {

		if (input[j] == input[i + j]) {
			continue;
		}
		else check = false;

	}


	return check;
}



int main() {

	int t;		//test case
	int cnt = 1;	//#c
	string input;	//pattern
	char c;
	bool pattern = false;

	cin >> t;

	while (t--) {

		cin >> input;

		c = input[0];

		for (int i = 1; i < 20; i++) {

			if (c == input[i]) {

				pattern = check(i, input);

			}

			if (pattern == true) {
				
				cout << "#" << cnt << " " << i << "\n";
				pattern = false;
				cnt++;
				break;
			}

		}


	}


	return 0;
}