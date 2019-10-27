#include <iostream>
using namespace std;


int main() {


	int t;	//test case
	int n;
	int k;
	int cnt = 1;
	int block = 0;		//available block number
	bool okay = false;

	cin >> t;
	while (t--) {

		int arr[15][15];
		int result = 0;

		cin >> n >> k;

		if (k > n) return -1;

		for (int i = 0; i < n; i++) {

			for (int j = 0; j < n; j++) {
				
				cin >> arr[i][j];

			}
		}

		for (int i = 0; i < n; i++) {
			
			int how = 0;

			for (int j = 0; j < n; j++) {

				if (arr[i][j] == 0) {
					block = 0;
					continue;
				}
				else if (arr[i][j] == 1) {
					block++;
					
					if (block == k) {
						result++;
						okay = true;
					}else if (block > k) {
						
						if(okay) how++;
						
						okay = false;
						
					}

				}

			}

			result -= how;
			block = 0;
			how = 0;
			okay = false;

		}

		for (int i = 0; i < n; i++) {
			
			int how = 0;

			for (int j = 0; j < n; j++) {

				if (arr[j][i] == 0) {
					block = 0;
					continue;
				}
				else if (arr[j][i] == 1) {
					block++;
					
					if (block == k) {
						result++;
						okay = true;
					}else if (block > k) {
						
						if (okay) how++;
						
						okay = false;

					}
				}

			}

			result -= how;
			block = 0;
			how = 0;
			okay = false;

		}

		cout << "#" << cnt++ << " " << result << "\n";

	}

	return 0;
}