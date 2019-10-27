#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	vector<long long>number;
	double avg;
	double sum = 0;
	int result = 0;
	int n;
	double a;
	int j = 1;

	cin >> n;

	while (n--) {

		for (int i = 0; i < 10; i++) {
			cin >> a;
			number.push_back(a);
		}

		sort(number.begin(), number.end());

		for (int i = 1; i < number.size() - 1; i++) {
			sum += number[i];
		}

		avg = sum / 8;

		if (avg - (int)avg >= 0.5) {
			result = (int)avg + 1;
		}
		else result = (int)avg;
	
	//	result = round(avg);
		cout << "#" << j << " " << result << "\n";
		j++;

		number.clear();
		result = 0;
		sum = 0;
	}


	return 0;
}