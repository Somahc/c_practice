#include <bits/stdc++.h>
using namespace std;

int main() {
    
	int N,K;
	cin>>N>>K;
	
	vector<pair<int,int>> p(N);
	
	for(int i=0;i<N;i++){
		cin>>p[i].first>>p[i].second;
	}
	
	sort(p.begin(),p.end());
	
	long long sum = 0;
	
	for(int i=0;i<N;i++){
		sum += p[i].second;
	}
	
	if(sum<=K)cout<<1<<endl;
	else{
		for(int i=0;i<p.size();i++){
			if(sum<=K){
				cout<<p[i-1].first+1<<endl;
				return 0;
			}
			sum -= p[i].second;
		}
		cout<<p.back().first+1<<endl;
	}
	
	return 0;
}
