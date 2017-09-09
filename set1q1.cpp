//1 - Check whether a number is positive or negative or zero   
#include <iostream>
using namespace std;

int main() {
 int a;
 cout<<"enter the value";
 cin>>a;
 if(a<0){
 	cout<<"the number is negative";
 }
 else if(a>0){
 	cout<<"the number is positive";
 }
 else{
 	cout<<"the number is zero";
 }
	return 0;
}