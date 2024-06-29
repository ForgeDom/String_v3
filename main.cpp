#include <iostream>
using namespace std;

void reverse(char* str) {
	int length = 0;
	for (int i = 0; i < str[i] != '\0'; ++i) {
		length++;
	}

	for (int i = length; i >=0; --i) {
		cout << str[i];
	}
}
int main() {
	const int size = 1000;
	char str[size];

	cout << "Enter text:" << endl;
	cin.getline(str, size);
	reverse(str);
	return 0;
}