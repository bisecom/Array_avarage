//Averrage of an array
#include <ctime>
#include <iostream>
using namespace std;
int summa(int arr[], int size) {
	int res = 0, av = 1;
	for (int i = 0; i < size; i++)
		res += arr[i];
	av = (float)(res / size);
	return av;
}
void main() {
	srand(time(NULL));
	const int N = 5;
	int ar1[N];
	for (int i = 0; i < N; i++) {
		ar1[i] = rand() % 10;
		cout << ar1[i] << "\t";
	}
	cout << endl;
	float a = summa(ar1, N);
	cout << "Averrage of the numbers is "<< a<<endl;
}
