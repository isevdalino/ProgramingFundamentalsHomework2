#include<iostream>
using namespace std;
void arraysSection(int a[50],int b[50],int lenght1,int lenght2);
void arraysMarginFS(int a[50],int b[50],int lenght1,int lenght2);
void armstrongNumbers(int a[50],int b[50],int lenght1,int lenght2);
int main()
{
  int n;
  int m;
  int array1[50];
  int array2[50];
  cout<<"Enter the lenght of array 1"<<endl;
  cin>>n;
  cout<<"Enter the lenght of array 2"<<endl;
  cin>>m;
  while (n>50){
    cout<<"The value of n should be smaller than or equel to 50"<<endl;
	cin>>n;
  }
  while (m>50){
    cout<<"The value of m should be smaller than or equel to 30"<<endl;
	cin>>m;
  }
  cout<<"Enter array 1"<<endl;
  for (int i = 0; i < n; i++){
    cin >> array1[i];
  }
  cout<<"Enter array 2"<<endl;
  for (int i = 0; i < m; i++){
    cin >> array2[i];
  }
  arraysSection(array1,array2,n,m);
  arraysMarginFS(array1,array2,n,m);
  armstrongNumbers(array1,array2,n,m);
  system("pause");
  return 0;
}
void arraysSection(int a[50],int b[50],int lenght1,int lenght2){
  bool doesItRepeat;
  bool doesItRepeat2;
  cout<<"The section of the two given arrays is:"<<endl;
  for (int i=0;i<lenght1;i++){
    doesItRepeat=false;
	for(int j=0;j<lenght2;j++){
	  doesItRepeat2=false;
		if (i>0){
	    for (int p=i-1;p>=0;p--){
	      if (a[i]==a[p]){
	        doesItRepeat=true;
		    break;
		  }
	    }
	    
	 }
	 if (j>0){
	   for (int p=j-1;p>=0;p--){
	     if (b[j]==b[p]){
	       doesItRepeat2=true;
		   break;
		 }
	   }
	 }
      if ((a[i]==b[j])&&((!doesItRepeat)&&(!doesItRepeat2))){
        cout<<a[i]<<",";
	  }
	}
    
  }
  cout<<endl;
}
void arraysMarginFS(int a[50],int b[50],int lenght1,int lenght2){
  bool areDifferent;
  cout<<"The elements of the margin array1\\array2 \nwhich are not multiple of 17 are:"<<endl;
  for(int i=0;i<lenght1;i++){
    areDifferent=true;
	for(int j=0;j<lenght2;j++){
	  if (a[i]==b[j]){
	    areDifferent=false;
		break;
	  }
	  
	}
	if (areDifferent&&((a[i]%17)!=0)){
        cout<<a[i]<<",";
	  }
  }
  cout<<endl;
}
void armstrongNumbers(int a[50],int b[50],int lenght1,int lenght2){
  int numberOfDigits=1;
  int sumOfDigits=0;
  int count=0;
  int array3[50];
  int c;
  int v;
  bool areDifferent;
  cout<<"The elements of the margin array1\\array2 \nwhich are Armstrong numbers are:"<<endl;
  for(int i=0;i<lenght1;i++){
    areDifferent=true;
	for(int j=0;j<lenght2;j++){
	  if (a[i]==b[j]){
	    areDifferent=false;
		break;
	  }
	  
	}
	if (areDifferent){
        array3[count]=a[i];
	    count++;  
	}
  }

  for (int h=0;h<count;h++)	{
     c=array3[h];
     v=array3[h];
	 while((c/=10)!=0){
	  ++numberOfDigits;
     }
	  sumOfDigits+=pow((double)(array3[h]%10),(double)numberOfDigits);
	  while ((v/=10)!=0){
	  sumOfDigits+=pow((double)(v%10),(double)numberOfDigits);
	  }
	  if(array3[h]==sumOfDigits){
	    cout<<array3[h]<<",";
	  }
cout<<endl;
  }
}
