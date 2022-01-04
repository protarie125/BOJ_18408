#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int x;
	auto n1 = int{ 0 };
	auto n2 = int{ 0 };
	for (int i = 0; i < 3; ++i) {
		cin >> x;
		if (1 == x) {
			n1 += 1;
			if (2 == n1) {
				cout << 1;

				return 0;
			}
		}
		else {
			n2 += 1;
			if (2 == n2) {
				cout << 2;

				return 0;
			}
		}
	}

	return 0;
}