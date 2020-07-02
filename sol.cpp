#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void test_case() {
	int n, m;
	cin >> n >> m;
	if((n * m) % 2 == 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		test_case();
	}
}
