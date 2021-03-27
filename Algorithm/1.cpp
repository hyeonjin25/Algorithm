#include <iostream>
using namespace std;

//전역변수로 선언하면 0으로 초기화!

int arr[5];

int main() {
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << ' ';
	}
}