#include <iostream>
#include <vector>
using namespace std;

int victory = 0;	//규영 이김
int lose = 0;		//인영 이김

void game( int* a, int* b, int a_score, int b_score, int present) {

	if (a_score > 85 || b_score >  85) {	//누군가 85점을 넘었거나

		int temp = 1;	
		for (int i = present; i < 9; i++) {	//이미 85점을 넘었다면 다음부턴
											//뭘내도 이기므로 나머지 경우 계산
			temp *= (9 - i);

		}

		if (a_score > b_score) {	//85넘은게 a일 경우
			victory += temp;
		}
		else if (b_score > a_score) {	//85넘은게 b일 경우
			lose += temp;
		}

		return;

	}
	else if (present == 9) {	//9장을 다 비교했을 경우 큰 것의 경우가 1증가 됨

		if (a_score > b_score) {	
			victory += 1;
		}
		else if (b_score > a_score) {	
			lose += 1;
		}

		return;

	}
		
	int a_num;
	int b_num;

	for (int i = 0; i < 9; i++) {

		a_num = a[i];
		//쓴 카드를 표시 해주는 방법 ( 0 1 2 )
		if (a_num == -1) continue; // 0)
		
		b_num = b[present];

		a[i] = -1;	// 1)

		if (a_num > b_num) {	

			game(a, b, a_score + a_num + b_num, b_score, present + 1);	//현재 판에서 게임을 해서 gyu가 낸 값이 더 크면 gyu의 점수를 더하고 다음 게임 실행

		}
		else {	//같을 경우는 없음 총합이 171이므로

			//점수, 지금까지 사용 한 카드 업데이트
			game(a, b, a_score, b_score + a_num + b_num, present + 1); //현재 판에서 게임을 해서 in가 낸 값이 더 크면 in의 점수를 더하고 다음 게임 실행

		}
		a[i] = a_num;	// 2)

	}



}

int main() {

	int t;
	int cnt = 1;
	
	cin >> t;

	while (t--) {

		int gyu[9];
		int in[9];
		int c;

		for (int i = 0; i < 9; i++) {	//2개의 벡터에 나눠 담기
			cin >> c;
			gyu[i] = c;

		}
		
		int index = 0;
		for (int i = 1; i <= 18; i++) {	
			
			bool okay = false;

			for (int j = 0; j < 9; j++) {

				if ( i != gyu[j]) {
					okay = true;
				}
				else {
					okay = false;
					break;
				}

			}

			if (okay) {
				in[index] = i;
				index++;
			}

		}
		
		
		//1 ~ 18까지의 합 171
		//규영이는 점수를 86이상으로 만들면 이김
		//또는 인영이의 점수 85이하면 짐

		victory = 0;	//초기화
		lose = 0;
		
		game(gyu, in, 0, 0, 0);

		cout << "#" << cnt++ << " " << victory << " " << lose << "\n";

	}
	   	  

	return 0;
}