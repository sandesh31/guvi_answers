#include <iostream>
using namespace std;

int main() {
	int i,j,n;
	cout<<"enter number of rows";
	cin>>n;
	for(i = n; i > 0; i--) {
	for(j = i; j > 0; j--) {
	cout<<"* ";
 } 
 cout<<"\n";
}
	return 0;
}