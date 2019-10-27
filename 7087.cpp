#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	int t;	//test case
	int cnt = 1;
	int n;


	cin >> t;
	while (t--) {

		cin >> n;
		vector<char>name;

		while (n--) {

			string input;
			cin >> input;

			name.push_back(input[0]);

		}

		sort(name.begin(), name.end());
		
		int count = 0;
		int now = 0;
		for (int i = 0; i < name.size(); i++) {

			if (name[i] - 'A' == now) {

				count++;
				now++;
			}

		}

		cout << "#" << cnt++ << " " << count << "\n";

	}
	return 0;
}