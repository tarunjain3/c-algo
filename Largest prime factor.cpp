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
