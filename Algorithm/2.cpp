#include <iostream>
using namespace std;

//2의 제곱수 구하기

int main() {
	int input;
	cin >> input;

	/*while (input % 2 == 0) {
		input /= 2;
	}
	if (input == 1) cout << "Yes";
	else cout << "No";*/

	//비트연산자를 이용하면 더 쉽게 연산할 수 있다.
	if (input == (-input & input)) cout << "Yes";
	else cout << "No";

	return 0;
}