//����
// �Ź� ������ �� n�� ���� ������ ������ �ϰ� �Ǹ� �������� ������ �ʰ� �ȴ�. �׷��� ū�� �ʿ� X
#include <iostream>
using namespace std;

int check(int n) {
	int count = 1;
	int Num = 1;
	while (Num % n != 0) {
		// �� ���� �߿���
		Num = (Num * 10 + 1) % n;
		count++;
	}
	return count;
}

int main() {
	int count = 1;
	int Num = 1;
	int n;
	while (cin >> n) {
		//���� cin >> n���� ����ʰ� ����.
		cout << check(n) << "\n";
	}
	return 0;
}