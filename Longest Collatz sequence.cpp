// The following iterative sequence is defined for the set of positive integers:

// n → n/2 (n is even)
// n → 3n + 1 (n is odd)

// Using the rule above and starting with 13, we generate the following sequence:

// 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
// It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

// Which starting number, under one million, produces the longest chain?

// NOTE: Once the chain starts the terms are allowed to go above one million
// Answer:  837799

#include <iostream>
using namespace std;
collatz( long long int n){
	if (n==1) return 1 ;
	else if(n%2==0) return 1 + collatz(n/2);
	else return 2 + collatz((3 * n + 1)/2);
}
int main(){
long long int count = 0, chain = 0, maxChain = 0 , maxElement;
	for (long long int i = 13 ; i<=13;i++){
		chain =	collatz(i);
	if( maxChain <	chain){
		maxChain = chain;
		maxElement = i;
		}	
	}
	cout<<"maxChainCount : "<<maxChain << " max Element : "<< maxElement<< endl;
	return 0;
}
