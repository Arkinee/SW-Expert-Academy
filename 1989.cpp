#include <iostream>
#include <string>
using namespace std;


int main() {

	int test;	//test case
	int cnt = 1;
	string palindrome;
	int check = 1;


	cin >> test;

	while (test--) {

		cin >> palindrome;

			if (palindrome.length() % 2 == 0) {

				for (int i = 0; i < palindrome.length() / 2; i++) {

					if (palindrome[i] == palindrome[palindrome.length() - 1 - i])
						continue;
					else {
						check = 0;
					}
				}

			}
			else {

				for (int i = 0; i < (palindrome.length() / 2) + 1; i++) {

					if (palindrome[i] == palindrome[palindrome.length() - 1 - i])
						continue;
					else {
						check = 0;
					}


				}

			}

			cout << "#" << cnt++ << " " << check << "\n";
			check = 1;

	}

	return 0;
}