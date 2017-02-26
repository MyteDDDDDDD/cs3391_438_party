# include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	int *c;
	c = new int[t];
	for (int i = 0; i < t; i++) {
		int temp;
		cin >> temp;
		if (temp < 3)
			c[i] = 0;
		else
			c[i] = temp - 2;
	}
	for (int i = 0; i < t; i++) {
		cout << c[i] << endl;
	}

	return 0;
}
