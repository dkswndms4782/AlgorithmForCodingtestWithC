#include <iostream>
using namespace std; 
int main() {
	long long int res = 0;
	int N; cin >> N;
	int mid = N / 2;
	for (int i = 1; i <= mid; i++) res += i * (N / i);
	for (int i = mid + 1; i <= N; i++) res += i;
	cout << res;
}