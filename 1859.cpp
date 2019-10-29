#include <iostream>
#include <vector>
using namespace std;


long long x;		//테스트 케이스
long long day;		//몇일
long long price;	//임시 최대
long long sum = 0;	//합
long long flag;
int arr[1000001] = {0,};	//각 일 가격

int main() {

	cin >> x;
	vector<long long>sums;

	while (x--) {
		

		cin >> day;
		if (day < 2) return -1;

		for (int i = 1; i <= day; i++) {
			cin >> arr[i];
		}
		
		price = arr[day];
		flag = day;
		for (int i = day-1; i > 0; i--) {

			if (arr[i] > price) {
				for (int j = i+1; j < flag; j++) {
					sum += (price - arr[j]);
				}
				flag = i;
				price = arr[flag];
			}
			else if (arr[i] == price) {
				flag = i;
				price = arr[flag];
			}

			if (i == 1) {
				for (int j = i; j < flag; j++) {
					sum += (price - arr[j]);
				}
			}

		}

		sums.push_back(sum);
		sum = 0;

	}

	for (int i = 0; i < sums.size(); i++) {
		cout << "#" << i + 1 << " " << sums[i] << "\n";
	}

		return 0;
}	//테스트 5개 까지 맞음