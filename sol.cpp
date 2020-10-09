#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int m=0, sn=0;
		for(int i=0; i<(int)s.size(); ++i) {
			if(s[i]=='s'&&s[i+1]=='m')
				m++, i++;
			else if(s[i]=='m'&&s[i+1]=='s')
				m++, i++;
			else if(s[i]=='s')
				sn++;
			else if(s[i]=='m')
				m++;
		}
		if(m==sn)
			cout << "tie";
		else if(m<sn)
			cout << "snakes";
		else
			cout <<"mongooses";
		cout << "\n";
	}
}
