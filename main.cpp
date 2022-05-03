#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	int total;
	cin >> total;

	for (int i = 0; i < 9; ++i) {
		int x;
		cin >> x;

		total -= x;
	}

	cout << total;

	return 0;
}