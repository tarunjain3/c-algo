// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

// a2 + b2 = c2
// For example, 32 + 42 = 9 + 16 = 25 = 52.

// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

// ans : first number : 375 second number : 200last number : 425
// product : 31875000

#include <iostream>
using namespace std;

int main() {
    int count =0 ,a,b,c;
 for (int i = 0; 1 ;i++){
     for (int j = 0 ; j<i ; j++){
         if((i * i) + (j*j) == (1000- i - j) *(1000- i - j) ){       
             a=i;b=j;
             count++;
             break;
         }
     }

     if(count!=0){
     	c=1000-a-b;
     	 cout<<"first number : "<<a<<" second number : "<< b<< " last number : " <<c<< endl;
		 break ;
	 };
 }
    cout<<"product : " << a*b*c<<endl;
	return 0;
}
