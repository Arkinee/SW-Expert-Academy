#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	int t;
	int cnt = 1;
	int count = 0;
	int n;
	string card;

	cin >> t;
	while (t--) {

		vector<string>shuffle1;
		vector<string>shuffle2;
		
		cin >> n;
		if (n % 2 == 0) {

			for (int i = 0; i < n / 2; i++ ) {

				cin >> card;
				shuffle1.push_back(card);
			}

			for (int i = n / 2; i < n; i++) {
				cin >> card;
				shuffle2.push_back(card);
			}

		}
		else {

			for (int i = 0; i < n / 2 + 1; i++) {

				cin >> card;
				shuffle1.push_back(card);
			}

			for (int i = n / 2 + 1; i < n; i++) {
				cin >> card;
				shuffle2.push_back(card);
			}
		}



		cout << "#" << cnt++ << " ";

		for (int i = 1; i <= n; i++) {
			if (i % 2 != 0) {
				cout << shuffle1[i / 2] << " ";
			}
			else {
				cout << shuffle2[i / 2 - 1] << " ";
			}
			
		}

		cout << "\n";

	}

	return 0;
}