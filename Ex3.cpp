#include<iostream>
using namespace std;
int main()
{
	int counter=0;
	int lenghtCount;
	int swapper;
	int smallest;
	int myArray[50];
	int groundLenght[50];
	int n;
	cout << "Enter the lenght of the row"<< endl;
	cin>>n;
	cout << "Enter the row" << endl;
	for (int i = 0; i < n; i++){
		cin >> myArray[i];
	}
	//sorting the array
	int i, j, minIndex, tmp;    
      for (i = 0; i < n - 1; i++) {
            minIndex = i;
            for (j = i + 1; j < n; j++)
                  if (myArray[j] < myArray[minIndex])
                        minIndex = j;
           if (minIndex != i) {
                  tmp = myArray[i];
                  myArray[i] = myArray[minIndex];
                  myArray[minIndex] = tmp;
            }
      }
	cout<<"The sorted row looks like that:"<<endl;
	for (int k = 0; k < n; k++){
		cout<< myArray[k]<<",";
	}
	cout<<endl;
	for(int i=0,j;i<n;i++){
     lenghtCount=1;
	 j=i;
	 while((myArray[j])==(myArray[j+1])){
		 j++;
		 lenghtCount++;
	   }
	  groundLenght[i]= lenghtCount;
	   counter++;
   }
   int max=groundLenght[0];
   for(int i=1;i< counter;i++){
	   if(groundLenght[i]>max){
	    max=groundLenght[i];
	   }
   }
   if(max>1){
     cout<<"The lenght of the longest ground in the sorted row is:"<<max<<endl;
   }else{
     cout<<"The row doesn't have a ground"<<endl;
   }
	system("pause");
	return 0;
}


