#include <iostream>
using namespace std;

int main() {
	int a[10],i,n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]==i){
			cout<<a[i]<<"is equal to array index"<<i<<endl;
			break;
		}
	}
	if(a[i] != i){
		cout<<"no match found";
	}
	return 0;
}