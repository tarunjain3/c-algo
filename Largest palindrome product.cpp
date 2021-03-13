// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

// Find the largest palindrome made from the product of two 3-digit numbers.

#include <iostream>
using namespace std;
	int reverse(int num , int revNum){
		if (num == 0)
		return revNum;
		 revNum = 10* revNum + num%10;
		 num = num/10;
		 return reverse(num , revNum);
	}
	bool checkPalidrome(int num){
	return (num == reverse(num,0));		
	}
int main() {

 int d1,d2,d3,d4, d5 , d6 ,palidrome ,currentAns = 0;
    for(int i = 999 ; i>100 ; i--){
        for (int j = 999 ; j>100; j--)
        {
            palidrome = i * j;
				if (checkPalidrome(palidrome) && palidrome > currentAns){		 
				            currentAns = palidrome;
				            break;
				}	
			}
        }
         cout<<endl<<endl<<"found palidrome number : " << currentAns<<endl <<endl;
    	return 0;
    }

// Answer:  906609
