#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int t;	//test case
	int n;	//student
	int k;	//k¹øÂ°
	int cnt = 1;

	cin >> t;
	while (t--) {

		double arr[100][3] = {};
		double temp = 0;
		string result;
		vector<double>store;
		int degree;

		cin >> n >> k;
		if (n < k) return -1;

		for (int i = 0; i < n; i++) {
			
			double sum = 0;
			cin >> arr[i][0] >> arr[i][1] >> arr[i][2];

			sum += arr[i][0] * 0.35 + arr[i][1] * 0.45 + arr[i][2] * 0.20;

			if (i == k-1) {
				temp = sum;
			}

			store.push_back(sum);

		}

		sort(store.begin(), store.end());
		
		for (int i = 0; i < 10; i++){

			for (int j = 0; j < store.size() / 10; j++) {

				if (store[(i * store.size() / 10) + j] == temp) {
					degree = i + 1;
					break;
				}
			}

		}

		if (degree == 10) {
			result = "A+";
		}else if (degree == 9) {
			result = "A0";
		}else if (degree == 8) {
			result = "A-";
		}else if (degree == 7) {
			result = "B+";
		}else if (degree == 6) {
			result = "B0";
		}else if (degree == 5) {
			result = "B-";
		}else if (degree == 4) {
			result = "C+";
		}else if (degree == 3) {
			result = "C0";
		}else if (degree == 2) {
			result = "C-";
		}else if (degree == 1) {
			result = "D0";
		}

		cout << "#" << cnt++ << " " << result << "\n";
	}

	return 0;
}