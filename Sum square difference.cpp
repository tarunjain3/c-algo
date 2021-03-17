// <p>The sum of the squares of the first ten natural numbers is,</p>
// $$1^2 + 2^2 + ... + 10^2 = 385$$
// <p>The square of the sum of the first ten natural numbers is,</p>
// $$(1 + 2 + ... + 10)^2 = 55^2 = 3025$$
// <p>Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is $3025 - 385 = 2640$.</p>
// <p>Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.</p>

Answer:  25164150

#include <iostream>
using namespace std;
int sqSum = 0;
int sumSq = 0;
int sqOfSum( int n){
    if (n==0) return sqSum * sqSum;
    sqSum = sqSum + n;
    return sqOfSum(n-1);
}
int sumOfSq(int n){
    if(n==0) return sumSq;
    sumSq = sumSq +(n*n);
    return sumOfSq(n-1);
    
}

int main() {
   
int difference = sqOfSum(100) - sumOfSq(100);
cout<<difference<<endl;
    return 0;
}
