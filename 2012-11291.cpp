#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void main() {
	vector<int> vec;
	int num;
	while (cin >> num) {
		vec.push_back(num);

	}

	sort(vec.begin(), vec.end());
	reverse(vec.begin(), vec.end());
	cout << "ordered array" << endl;
	for (auto it = vec.begin(); it < vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	system("pause");
}