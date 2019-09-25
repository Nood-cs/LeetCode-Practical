#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string arr[13] = { "1","2","3","5","4","8","6","7","9","10","11","12","13" };

	sort(arr, arr + 13); 
	for (int i = 0; i < 13; i++) {
		cout << arr[i] << " "; 
	}
	cout << endl;
	system("pause");
	return 0;
}