#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin >> n;

	vector<int> vec(n,0);
	for(int i = 0; i < n; i++)
		cin >> vec[i];

	int sum = 0;
	for(int i = 0; i < n; i++)
		sum += vec[i];

	cout << sum << endl;


return 0;	
}