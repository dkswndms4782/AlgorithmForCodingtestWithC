#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// max,min�� O(N)
//sort�� O(NlogN)�̶� max,min���
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