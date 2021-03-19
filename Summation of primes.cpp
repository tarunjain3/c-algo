// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

// Find the sum of all the primes below two million
// Answer:  142913828922

#import <iostream>
using namespace std;
bool checkPrime(int n){
	if (n==1) return false;
	if (n==2 || n==3 ) return true;
	else if (n%2 == 0) return false;
	else if (n %3 == 0) return false;
	else{
		for(int i = 5; i * i<=n ;i = i+2){
		if(n%i==0 )return false;
		
	}
	}
	return true;
	
}
int main(){
	long long int sum = 2;
	for (int i = 1 ; i<2000000; i = i+2){
		if(checkPrime(i)){
		sum = sum + i;
	}
	}
	cout<<"summation of prime : "<<sum<<endl;
	return 0;	
}
