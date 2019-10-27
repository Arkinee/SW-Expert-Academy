#include <iostream>
using namespace std;

int main() {

	int t;	//test case
	int cnt = 1;
	int s;
	int e;
	int m;

	cin >> t;
	while (t--) {

		cin >> s >> e >> m;

		if (s == 365) s = 0;
		if (e == 24) e = 0;
		if (m == 29) m = 0;

		unsigned _int64 result = s;

		while (true) {
			
				if (result % 29 == m) {

					if (result % 24 == e) {
						break;
					}
					else result += 365;

				}
				else {
					result += 365;
				}
		}
		//Áß¿ä;;
		if (s == 0 && e == 0 && m == 0) {
			result = 365 * 24 * 29;
		}

		cout << "#" << cnt++ << " " << result << "\n";
	}

	return 0;
}