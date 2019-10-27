#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {

	int test;	//testcase
	int n;
	int m;
	int cnt = 1;

	cin >> test;

	while (test--) {

		vector<int>max_num;
		int arr[15][15];

		cin >> n >> m;

		for (int i = 0; i < n; i++) {

			for (int j = 0; j < n; j++) {

				cin >> arr[i][j];

			}

		}


		int temp = 0;

		for (int i = 0; i <= n - m; i++) {

			for (int j = 0; j <= n - m; j++) {

				temp += arr[i][j];
				
			}

		}

		sort(max_num.begin(), max_num.end());
		cout << "#" << cnt++ << " ";
		cout << max_num.back();
		cout << "\n";


	}




	return 0;
}