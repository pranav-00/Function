#include<iostream>
using namespace std;
int IsPrime(int a){
	for(int i=2;i<a;i++){
		if(a%i==0)
			return 0;
	}
	return 1;
}
void Check(int x){
	int con=0;
	for(int i=2;i<=x/2;i++){
		if(IsPrime(i)){
			if(IsPrime(x-i)){
				cout<<x<<" = "<<i<<"+"<<x-i<<endl;
				con=1;}
		}
	}
	if(con==0){
		cout<<x<<" can't be express as sum of two prime number";
	}
}
int main(){
	int a;
	cout<<"Enter number you want to express as sum of two prime numbers\n";
	cin>>a;
	Check(a);
	return 0;
}
