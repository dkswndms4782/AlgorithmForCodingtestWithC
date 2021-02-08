#include <iostream>
using namespace std;

int GCD(int a,int b) {
	if (a % b == 0) return b;
	else GCD(b, a % b);
}

int main() {
	int a, b; cin >> a >> b;
	int gcd;
	if (a > b) gcd = GCD(a, b);
	else gcd = GCD(b, a);
	cout << gcd << "\n" << a * b / gcd;
}