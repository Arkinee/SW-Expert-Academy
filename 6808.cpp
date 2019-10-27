#include <iostream>
#include <vector>
using namespace std;

int victory = 0;	//�Կ� �̱�
int lose = 0;		//�ο� �̱�

void game( int* a, int* b, int a_score, int b_score, int present) {

	if (a_score > 85 || b_score >  85) {	//������ 85���� �Ѿ��ų�

		int temp = 1;	
		for (int i = present; i < 9; i++) {	//�̹� 85���� �Ѿ��ٸ� ��������
											//������ �̱�Ƿ� ������ ��� ���
			temp *= (9 - i);

		}

		if (a_score > b_score) {	//85������ a�� ���
			victory += temp;
		}
		else if (b_score > a_score) {	//85������ b�� ���
			lose += temp;
		}

		return;

	}
	else if (present == 9) {	//9���� �� ������ ��� ū ���� ��찡 1���� ��

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
		//�� ī�带 ǥ�� ���ִ� ��� ( 0 1 2 )
		if (a_num == -1) continue; // 0)
		
		b_num = b[present];

		a[i] = -1;	// 1)

		if (a_num > b_num) {	

			game(a, b, a_score + a_num + b_num, b_score, present + 1);	//���� �ǿ��� ������ �ؼ� gyu�� �� ���� �� ũ�� gyu�� ������ ���ϰ� ���� ���� ����

		}
		else {	//���� ���� ���� ������ 171�̹Ƿ�

			//����, ���ݱ��� ��� �� ī�� ������Ʈ
			game(a, b, a_score, b_score + a_num + b_num, present + 1); //���� �ǿ��� ������ �ؼ� in�� �� ���� �� ũ�� in�� ������ ���ϰ� ���� ���� ����

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

		for (int i = 0; i < 9; i++) {	//2���� ���Ϳ� ���� ���
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
		
		
		//1 ~ 18������ �� 171
		//�Կ��̴� ������ 86�̻����� ����� �̱�
		//�Ǵ� �ο����� ���� 85���ϸ� ��

		victory = 0;	//�ʱ�ȭ
		lose = 0;
		
		game(gyu, in, 0, 0, 0);

		cout << "#" << cnt++ << " " << victory << " " << lose << "\n";

	}
	   	  

	return 0;
}