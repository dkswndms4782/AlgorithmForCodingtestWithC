#include <iostream>
using namespace std;
// ��� �ϳ��ϳ� �� ���ϸ� 0.5���� �ð������� �ֱ� ������ �������
// 10���� f(1) + f(2) + ... + f(10)�� ���� ��
// 1 * 10 + 2*5 + 3*3 + �̷��� 5���� ���ϰ� ��
//10/2 + 1�� 6���ʹ� �׳� ���ϰ� �ȴ�. 
int main() {
	long long int res = 0;
	int N; cin >> N;
	int mid = N / 2;
	for (int i = 1; i <= mid; i++) res += i * (N / i);
	for (int i = mid + 1; i <= N; i++) res += i;
	cout << res;
}