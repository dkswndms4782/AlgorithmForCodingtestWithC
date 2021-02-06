//주의
// 매번 연산할 때 n에 대해 나머지 연산을 하게 되면 나머지가 변하지 않게 된대. 그래서 큰수 필요 X
#include <iostream>
using namespace std;

int check(int n) {
	int count = 1;
	int Num = 1;
	while (Num % n != 0) {
		// 이 밑이 중요함
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
		//여기 cin >> n쓰면 출려초과 난다.
		cout << check(n) << "\n";
	}
	return 0;
}