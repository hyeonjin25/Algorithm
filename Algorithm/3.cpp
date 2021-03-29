#include <iostream>
using namespace std;

//n개의 숫자가 주어질 때, 각 숫자를 더해서 s가 될 수 있는 부분집합이 몇개 있는지 구하라
//단, n개 중 첫번째 숫자는 항상 포함되어야하고, 첫번째 숫자 혼자만으로도 부분집합을 만들 수 있다.
//n, s, 숫자들 순서로 주어진다.

//me는 항상 포함되어야 할 수
//coun은 조건을 만족하는 부분집합의 수
int n, s, me, coun;
int arr[25];

//재귀함수로 풀이
//n개의 숫자로는 2의 n제곱 만큼의 부분집합을 만들 수 있음
//모든 숫자들이 포함되거나 포함되지 않거나의 두가지 경우를 가지고 있기 때문
//이 때, 첫번째 숫자는 항상 포함되어야 하니 따로 입력받기
//재귀함수는 자기자신을 더하지 않은경우와 더한경우 두가지 경우를 호출함
void re(int cur, int sum) {
	if (cur == n - 1) {
		if (s == sum) coun++;
		return;
	}

	return re(cur + 1, sum);
	return re(cur + 1, sum + arr[cur]);
}

int main() {

	cin >> n >> s >> me;
	for (int i = 0; i < n-1; i++) {
		cin >> arr[i];
	}

	re(0, me);
	
	cout << coun;
}