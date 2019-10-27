#include <iostream>
#include <vector>
using namespace std;

vector<unsigned long long>p;

void separate(unsigned long long k) {

	unsigned long long a = 1;
	while (1) {
		if (a > k) {

			unsigned long long x = a / 2;
			p.push_back(x);
			separate(k - x);
			break;
		}
		else if (a == k) {

			p.push_back(a);
			break;

		}
		else {
			a *= 2;
		}

	}
}

int main() {

	int t;
	int cnt = 1;
	unsigned long long n;
	/*
	자가 분열 규칙 : 
	p1 = 001
	p2 = 001 + 0 + 011 = 0010011
	p3 = 0010001 + 0 + 0011011
	~~~
	*/

	cin >> t;
	while (t--) {

		cin >> n;
		
		separate(n);

		if (p[p.size() - 1] * 2 == p[p.size() - 2]) {
			cout << "#" << cnt++ << " " << 1 << "\n";
		}
		else {
			cout << "#" << cnt++ << " " << 0 << "\n";
		}
		
		p.clear();
	}

	return 0;
}
