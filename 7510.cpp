#include <iostream>
using namespace std;

int main() {

	int t;		//test case	
	int n;		//number
	int cnt = 1;

	cin >> t;
	while (t--) {

		cin >> n;		//연속된 자연수의 합으로 나타내어야 함

		int result = 1;
		int a = 2;
		// n = a * x + a * (a - 1) / 2	여기서 x가 정수이면 표현 가능
		
		while (true) {

			double plus = a * (a - 1) / 2;
			double x = ((double)n - plus) / a;

			if (plus >= n) break;

			if (x - (int)x == 0) {
				result++;
			}
			a++;
		}

		cout << "#" << cnt++ << " " << result << "\n";
	}

	return 0;
}