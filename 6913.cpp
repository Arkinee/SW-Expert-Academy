#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int t;	//test case
	int n;
	int m;
	int cnt = 1;

	cin >> t;

	while (t--) {

		int a[20][20] = {};
		vector<int>result;
		cin >> n >> m;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
			}
		}


		for (int i = 0; i < n; i++) {
			int sum = 0;

			for (int j = 0; j < m; j++) {
				sum += a[i][j];
			}

			result.push_back(sum);

		}

		sort(result.begin(), result.end());

		int temp;
		int count = 0;
		for (int i = result.size() - 1; i >= 0; i--) {

			temp = result[result.size() - 1];
			if (result[i] == temp) count++;

		}

		cout << "#" << cnt++ << " " << count << " " << temp  << "\n";

	}

	return 0;
}