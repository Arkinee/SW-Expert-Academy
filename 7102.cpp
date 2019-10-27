#include <iostream>
#include <vector>
using namespace std;


int main() {

	int t;	//test caseN
	int n;	//card set 1
	int m;	//card set 2
	int cnt = 1;
	
	int card1[20];
	int card2[20];

	/*
		만들 수 있는 숫자는 2 ~ n + m까지
		CASE
		1: n == m
		2: n != m
	*/

	cin >> t;
		while (t--) {

			vector<int>result;
			cin >> n >> m;

			int big = n;
			int small = m;

			if (n == m) {

				result.push_back(n + 1);

			}
			else {

				if (n < m) {
					big = m;
					small = n;
				}
				
				for (int i = small + 1; i <= big + 1; i++) {
					result.push_back(i);
				}

			}

			cout << "#" << cnt++ << " ";
			for (int i = 0; i < result.size(); i++) {
				cout << result[i] << " "; 
			}
			cout << "\n";
		}

	return 0;
}