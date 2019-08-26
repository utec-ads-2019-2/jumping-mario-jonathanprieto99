#include<iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
	int T,N,H,L;
	cin >> T;
	vector<int> v(50);
	for(int i=0; i<T;i++){
		H =0;
		L =0;
		cin >> N;

		if(T == 1){
			cout << "Case " << T << ": " << H <<  " " << L << endl;
			continue;
		}

		int j=0;

		while(j<N)
		{
			cin >> v[j];
			j++;
		}

		int k=0;

		while(k<N-1){
			if(v[k] < v[k+1]){
				H++;
			}
			else if (v[k] > v[k+1]){
				L++;
			}
			k++;
		}
		cout << "Case " << i+1 << ": " << H <<  " " << L << endl;

	}
	return 0;
}
