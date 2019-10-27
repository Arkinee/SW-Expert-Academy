#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

int main() {

	int t;	//test num
	int n;	//sentence num
	int check;// ! ? . À¸·Î ³ª´²Áö´Â ¹®Àå °¹¼ö
	int cnt = 1;

	string sentence;

	cin >> t;
	
	while (t--){

		check = 0;
		vector<int>num;
		cin >> n;
		int result = 0;

		while (check != n) {

			bool okay = false;
			bool last = false;
			int temp = 0;

			cin >> sentence;


			for (int i = 0; i < sentence.length(); i++) {

				if (sentence[i] == '?' || sentence[i] == '!' || sentence[i] == '.') {
					
					if (okay) {
						result++;
					}

					num.push_back(result);
					result = 0;
					check++;
					last = true;
					break;
					
				}

				if (i == 0 ){
					if (sentence[i] >= 65 && sentence[i] <= 90) {
						okay = true;
					}
					else {
						okay = false;
						last = false;
						break;
					}
				}

				if (i != 0) {
					if(sentence[i] >= 97 && sentence[i] <= 122) {
					okay = true;
					}
					else okay = false;

					last = false;
				}

			}

			if (okay && !last) {
				result++;
			}
		}

		cout << "#" << cnt++ << " ";

		for (int i = 0; i < num.size(); i++) {
			cout << num[i] << " ";
		}

		cout << "\n";

	}
	return 0;
}