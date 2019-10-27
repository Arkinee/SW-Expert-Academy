#include <iostream>
#include <string>
using namespace std;


string clap(int n) {

	int num = n;
	int cnt;
	string result="";

	while( num>0 ){
		int temp = num / 10;
		num %= 10;
		
		if (temp == 3 || temp == 6 || temp == 9) {
			result += "-";
		}

		if (num < 10) break;

	}
	//1ÀÇÀÚ¸®
	if (num == 3 || num == 6 || num == 9) {
		result += "-";
	}

	return result;
}


int main() {

	long long n;

	cin >> n;

	for (int i = 1; i <= n; i++) {

		if (clap(i) == "") {
			cout << i << " ";
		}
		else {
			cout << clap(i) << " ";
		}
	}


	return 0;
}