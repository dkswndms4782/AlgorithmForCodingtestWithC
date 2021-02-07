#include <iostream>
using namespace std;
// 약수 하나하나 다 구하면 0.5초의 시간제한이 있기 때문에 힘들거임
// 10까지 f(1) + f(2) + ... + f(10)이 있을 때
// 1 * 10 + 2*5 + 3*3 + 이렇게 5까지 더하게 됨
//10/2 + 1인 6부터는 그냥 더하게 된다. 
int main() {
	long long int res = 0;
	int N; cin >> N;
	int mid = N / 2;
	for (int i = 1; i <= mid; i++) res += i * (N / i);
	for (int i = mid + 1; i <= N; i++) res += i;
	cout << res;
}