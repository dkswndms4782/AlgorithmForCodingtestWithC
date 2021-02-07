#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// max,min은 O(N)
//sort는 O(NlogN)이라서 max,min사용
int main() {
	int n; cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int maximum = *max_element(v.begin(), v.end());
	int minimum = *min_element(v.begin(), v.end());
	cout << maximum * minimum;
}