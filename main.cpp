#include<iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
	int TIMES,AMOUNT,HIGH,LOW;
	cin >> TIMES;
	vector<int> v(50);
	for(int i=0; i<TIMES;i++){
		HIGH =0;
		LOW =0;
		cin >> AMOUNT;

		if(TIMES == 1){
			cout << "Case " << TIMES << ": " << HIGH <<  " " << LOW << endl;
			continue;
		}

		int j=0;

		while(j<AMOUNT)
		{
			cin >> v[j];
			j++;
		}

		int k=0;

		while(k<AMOUNT-1){
			if(v[k] < v[k+1]){
				HIGH++;
			}
			else if (v[k] > v[k+1]){
				LOW++;
			}
			k++;
		}
		cout << "Case " << i+1 << ": " << HIGH <<  " " << LOW << endl;

	}
	return 0;
}
