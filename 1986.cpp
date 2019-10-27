#include <iostream>
using namespace std;


int main() {


	int t;	//test case
	int cnt = 1;
	int n;
	int result;
	
	cin >> t;

	while (t--) {

		cin >> n;

		if (n % 2 == 1) {

			result = n / 2 + 1;

		}
		else {
			result = (n / 2) * (-1);
		}

		cout << "#" << cnt++ << " " << result << "\n";

	}

	   	  
	return 0;
}