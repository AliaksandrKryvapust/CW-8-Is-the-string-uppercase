#include<iostream>
#include <string>
#include<algorithm>
using namespace std;

bool is_uppercase(const string& s) {
	return  none_of(s.begin(), s.end(), islower);
}
int main() {
	string s = { "hello I AM DONALD" };
	cout << is_uppercase(s) << endl;
	return 0;
}