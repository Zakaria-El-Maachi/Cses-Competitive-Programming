#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, x;
	set<int> s;
	cin >> n;
	
	while(n--){
		cin >> x;
		s.insert(x);
	}
	
	cout << s.size();
	
	return 0;
}