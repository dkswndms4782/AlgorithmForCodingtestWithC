#include <iostream>
using namespace std;
int main() {
	long long int res = 0;
	int T; cin >> T;
	int N;
	while (T--) {
		ios_base::sync_with_stdio(0);
		cin.tie(0); cout.tie(0);
		cin >> N;
		int mid = N / 2;
		for (int i = 1; i <= mid; i++) res += i * (N / i);
		res += ((N - mid) * (N + mid + 1) / 2);
		cout << res << "\n";
		res = 0;
	}
}