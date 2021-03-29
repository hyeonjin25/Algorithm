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
	//부호를 바꾸는 계산은 비트들을 모두 뒤집은 뒤에 1더하기
	//이렇게 할 경우 항상 가장 오른쪽의 1을 기준으로 왼쪽만 비트가 뒤집힘
	//그러므로 부호만 다른 두 숫자를 비트 &연산을 하면 해당 1을 제외하고 전부 0임.
	//이 때, 2의 제곱수는 항상 비트 중 단 한개만 1이므로 
	//부호만 다른 숫자와 &연산을 해도 자기 자신이 나옴
	if (input == (-input & input)) cout << "Yes";
	else cout << "No";

	return 0;
}