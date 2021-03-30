#include <iostream>
#include <cmath>
using namespace std;

//처음에 좌표 개수 n(5<= n <=1000) 받기, 다음으로 해당 개수만큼 좌표 받기 
//-> x와 y는 띄어쓰기로 구분 (-1,000,000 <= x,y <= 1,000,000)
//좌표들 중 가장 거리가 먼 두 쌍의 번호 출력하기 (띄어쓰기로 구분)
//-> 받은 순서대로 1부터 번호 가짐
//만약 거리가 같으면 첫번째 번호가 작은 쌍 출력
//첫번째 번호가 같으면 두번째 번호가 작은 쌍 출력

//주의할 점: 각 좌표를 제곱할 경우 int를 벗어나므로 주의
//배열도 int를 벗어날 수 있으므로 주의

int n, a, b;
long long x[1010];
long long y[1010];
long long far, d;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (i == j) continue;
			d = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
			if (d > far) {
				far = d;
				a = i; b = j;
			}
			// else if (d == far) {
			// 	if (i < a) {
			// 		a = i; b = j;
			// 	}
			// 	else if (i == a) {
			// 		if (j < b) {
			// 			a = i; b = j;
			// 		}
			// 	}
			// }
		}
	}
	cout << a + 1 << " " << b + 1;
	return 0;
}