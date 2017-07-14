#include<iostream>
#include<cmath>
using namespace std;
void doubledFLDigitsSumPrint(int n);
int* numberAfterProcedurePrint(int n);
void printTheBigger(int n);
int main()
{
	unsigned int n;
	cout<<"Enter a positive integer number"<<endl;
	cin>>n;
	while (n<1){
	  cout<<"The number should be a positive integer,try again"<<endl;
	  cin>>n; 
	}
	doubledFLDigitsSumPrint(n);
	printTheBigger(n);
	system("pause");
	return 0;
}
void doubledFLDigitsSumPrint(int n){
	int numberOfDigits=1;
	int c=n;
	while((c/=10)!=0){
	  ++numberOfDigits;
	}
	cout<< 2*((n%10)+(int)(n/((int)pow((double)10,(double)(numberOfDigits-1)))))<<endl;
}
int* numberAfterProcedurePrint(int n){
  int lastDigit;
  int digit;
  int g;
  int y=n;
  int c=n;
  int a=c;
  int numberOfDigits=1;
  int firstDigit;
  while((c/=10)!=0){
	  ++numberOfDigits;
  }
  static int digitsArray[10];
  int t = numberOfDigits-1;
  firstDigit = a/(int)pow((double)10,(double)t);
  if ((firstDigit%3)==0){
    digitsArray[0]=firstDigit/3;
	cout<<firstDigit/3;
  }else if (((firstDigit%3)!=0)&&((firstDigit%2)==0)){
     digitsArray[0]=firstDigit+1;
	 cout<<firstDigit+1;
  }else if (((firstDigit%3)!=0)&&((firstDigit%2)!=0)){
     digitsArray[0]=firstDigit+2;
	 cout<<firstDigit+2;
  }
  for(int i=1;i<numberOfDigits-1;i++){
     g;
	 --t;
	 g=a/(int)pow((double)10,(double)t);
	 digit = g%10;
	  if ((digit%3)==0){
  digitsArray[i]=digit/3;
		  cout<<digit/3;
  }else if (((digit%3)!=0)&&((digit%2)==0)){
    digitsArray[i]=digit+1;
	  cout<<digit+1;
  }else if (((digit%3)!=0)&&((digit%2)!=0)){
     digitsArray[i]=digit+2;
	  cout<<digit+2;
  }
  }
  lastDigit = y%10;
  if ((lastDigit%3)==0){
  digitsArray[numberOfDigits-1]=lastDigit/3;
	  cout<<lastDigit/3;
  }else if (((lastDigit%3)!=0)&&((lastDigit%2)==0)){
    digitsArray[numberOfDigits-1]=lastDigit+1;
	  cout<<lastDigit+1;
  }else if (((lastDigit%3)!=0)&&((lastDigit%2)!=0)){
    digitsArray[numberOfDigits-1]=lastDigit+2;
	  cout<<lastDigit+2;
  }
return digitsArray;
}
void printTheBigger(int n){
    int c=n;
	int h=n;
	int numberOfDigits=1;
    int arrayOfDigits[12];
	while((c/=10)!=0){
	  ++numberOfDigits;
    } 
	int *p;
	p=numberAfterProcedurePrint(n);
	cout<<endl;
	arrayOfDigits[0]=n%10;
	for(int i=1;i<numberOfDigits;i++){
	    n/=10;
		arrayOfDigits[i]=n%10;
	}
	if(arrayOfDigits[0]==0){
	  cout<<"The reverse representation of n is not a valid decimal number"<<endl;
	  return;
	}
	cout<<"The reverse representation of n is:"<<endl;
	for (int i = 0; i < numberOfDigits; i++){
		   cout<<arrayOfDigits[i];
		 }
		 cout<<endl;
	for (int i = 0; i < numberOfDigits; i++){
		if (*(p+i)>arrayOfDigits[i]){
		 cout<<"The received after procedures over the \"n\" number \nis bigger than the reverse representation of \"n\":"<<endl;
		 for (int i = 0; i < numberOfDigits; i++){
		   cout<<*(p+i);
		 }
		 cout<<">";
		 for (int i = 0; i < numberOfDigits; i++){
		   cout<<arrayOfDigits[i];
		 }
		 cout<<endl;
		 return;
		}else if (*(p+i)<arrayOfDigits[i]) {
		  cout<<"The received after procedures over the \"n\" number \nis smaller than the reverse representation of \"n\":"<<endl;
		 for (int i = 0; i < numberOfDigits; i++){
		   cout<<*(p+i);
		 }
		 cout<<"<";
		 for (int i = 0; i < numberOfDigits; i++){
		   cout<<arrayOfDigits[i];
		 }
		 cout<<endl;
		 return;
		  
		}
		if ((i=numberOfDigits-1)&&(*(p+i)==arrayOfDigits[i])){
		cout<<"The received after procedures over the \"n\" number \nis is equel to the reverse representation of \"n\":"<<endl;
		 for (int i = 0; i < numberOfDigits; i++){
		   cout<<*(p+i);
		 }
		 cout<<"=";
		 for (int i = 0; i < numberOfDigits; i++){
		   cout<<arrayOfDigits[i];
		 }
		 cout<<endl;
		 return;
		}
	}
}

