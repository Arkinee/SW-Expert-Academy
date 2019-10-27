#include <iostream>
#include <string>
using namespace std;

char one[6] = { 'A', 'D', 'O', 'P', 'Q', 'R' };
char two[1] = { 'B' };
char zero[19] = { 'C', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
 'N', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

int punch(char a) {

	for (int i = 0; i < sizeof(one); i++) {
		
		if(one[i] == a)	return 4;
	}

	for (int i = 0; i < sizeof(two); i++) {

		if (two[i] == a) return 2;
	}

	for (int i = 0; i < sizeof(zero); i++) {

		if (zero[i] == a) return 3;
	}


}

int main() {

	int t;
	int cnt = 1;

	cin >> t;
	while (t--) {

		string a;
		string b;
		bool same = true;

		cin >> a >> b;

		if (a.length() != b.length()) {	//a, b길이 다름
			cout << "#" << cnt++ << " " << "DIFF\n";
		}
		else {	//a 와 b의 길이 같음

			for (int i = 0; i < a.length(); i++) {

				if (punch(a[i]) == punch(b[i])) {

					continue;
				}
				else {
					same = false;
					break;

				}

			}

			if (same) {
				cout << "#" << cnt++ << " " << "SAME\n";
			}
			else
			{
				cout << "#" << cnt++ << " " << "DIFF\n";
			}
		}
	}
	   	
	return 0;
}