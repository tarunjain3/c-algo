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
collatz( long long int n ,int count){
	count = count + 1;
	if (n==1) return count ;
	else if(n%2==0) return collatz(n/2 , count);
	else return collatz(3 * n + 1 , count);
}
int main(){
long long int count = 0, chain = 0, maxChain = 0 , maxElement;
	for (long long int i = 2 ; i<=1000000;i++){
		chain =	collatz(i , count);
	if( maxChain <	chain){
		maxChain = chain;
		maxElement = i;
		}	
	}
	cout<<"maxChainCount : "<<maxChain << " max Element : "<< maxElement<< endl;
	return 0;
}
