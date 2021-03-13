// Largest prime factor algo

// The prime factors of 13195 are 5, 7, 13 and 29.

// What is the largest prime factor of the number 600851475143 ?

// ans:6857

#include <iostream>
using namespace std;
let num = 600851475143;

for (let i = 2; i*i<num+1 ;i++){
if(num%i==0){
while(num%i==0){
num = num/i
}
cout<<i<<endl
}
}
if(num!=1){
cout<<num<<endl;
}
