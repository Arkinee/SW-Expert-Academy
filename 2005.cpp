#include <iostream>
using namespace std;


int main() {

	int test;
	int cnt = 1;
	int size;

	cin >> test;

	while (test--) {

		int pascal[10][10] = {};
		pascal[0][0] = 1;

		cin >> size;

		for (int i = 1; i < size; i++) {

			for (int j = 0; j <= i; j++) {

				if (j == 0 || j == i) {
					pascal[i][j] = 1;
				}
				else {
					pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
				}

			}


		}

		cout << "#" << cnt++ << "\n";

		for (int i = 0; i < size; i++) {
			for (int j = 0; j <= i; j++) {
				cout << pascal[i][j] << " ";
			}
			cout << "\n";
		}

	}



	return 0;
}