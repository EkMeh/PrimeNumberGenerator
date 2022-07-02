#include <iostream>
#include <cstdlib>
#include<time.h>
using namespace std;


//loop function to check if primeNumber is a prime number
int CheckPrime(int number)
{
	bool YesNo;
	for(int i=2;i<number;i++)
	{
		if(number%i==1)
			return 1;
		else
			return 0;
	}	
}


//main function
int main() {
	int primeNumber;
	bool is_prime = true;
	//loop to generate a prime number
	do{
		srand (time(NULL));
//		random number generation
		primeNumber=rand() % 1000 + 2; 
		if(CheckPrime(primeNumber)==1)
		{
			is_prime=false;
			cout<<"Your generated prime is: "<<primeNumber;
		}
		else
		{
			is_prime=true;
		}
	}while(is_prime==true);
  	return 0;
}



