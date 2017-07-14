#include<iostream>
#include<string>
#include <cstdlib>
#include <algorithm>
#include <iterator>
using namespace std;
void printTheDeck(string array1[]);
template<typename RandomAccessIterator>
void knuthShuffle(RandomAccessIterator begin, RandomAccessIterator end) {
  for(unsigned int n = end - begin - 1; n >= 1; --n) {
    unsigned int k = rand() % (n + 1);
    if(k != n) {
      std::iter_swap(begin + k, begin + n);
    }
  }
}
void printCardAtTop(string array1[]);
void findCardByName(string array1[]);
char whatDoYouWanta();
void sordTheDeck(string array1[]);
void removeCardFromTheDeck(string array1[]);
const int standartCardDeckLenght=52;
static int counter=standartCardDeckLenght;
int main()
{
	char whatDoYouWant;
	whatDoYouWant=whatDoYouWanta();
	string cardsDeck[standartCardDeckLenght];
	cardsDeck[0]="spade-2";
	cardsDeck[1]="spade-3";
	cardsDeck[2]="spade-4";
	cardsDeck[3]="spade-5";
	cardsDeck[4]="spade-6";
	cardsDeck[5]="spade-7";
	cardsDeck[6]="spade-8";
	cardsDeck[7]="spade-9";
	cardsDeck[8]="spade-10";
	cardsDeck[9]="spade-J";
	cardsDeck[10]="spade-Q";
	cardsDeck[11]="spade-K";
	cardsDeck[12]="spade-A";
	cardsDeck[13]="heart-2";
	cardsDeck[14]="heart-3";
	cardsDeck[15]="heart-4";
	cardsDeck[16]="heart-5";
	cardsDeck[17]="heart-6";
	cardsDeck[18]="heart-7";
	cardsDeck[19]="heart-8";
	cardsDeck[20]="heart-9";
	cardsDeck[21]="heart-10";
	cardsDeck[22]="heart-J";
	cardsDeck[23]="heart-Q";
	cardsDeck[24]="heart-K";
	cardsDeck[25]="heart-A";
	cardsDeck[26]="diamond-2";
	cardsDeck[27]="diamond-3";
	cardsDeck[28]="diamond-4";
	cardsDeck[29]="diamond-5";
	cardsDeck[30]="diamond-6";
	cardsDeck[31]="diamond-7";
	cardsDeck[32]="diamond-8";
	cardsDeck[33]="diamond-9";
	cardsDeck[34]="diamond-10";
	cardsDeck[35]="diamond-J";
	cardsDeck[36]="diamond-Q";
	cardsDeck[37]="diamond-K";
	cardsDeck[38]="diamond-A";
	cardsDeck[39]="club-2";
	cardsDeck[40]="club-3";
	cardsDeck[41]="club-4";
	cardsDeck[42]="club-5";
	cardsDeck[43]="club-6";
	cardsDeck[44]="club-7";
	cardsDeck[45]="club-8";
	cardsDeck[46]="club-9";
	cardsDeck[47]="club-10";
	cardsDeck[48]="club-J";
	cardsDeck[49]="club-Q";
	cardsDeck[50]="club-K";
	cardsDeck[51]="club-A";
	while (whatDoYouWant!='x'){
		if (whatDoYouWant=='a'){
		  knuthShuffle(cardsDeck,cardsDeck+52);
		}else if (whatDoYouWant=='b'){
		  sordTheDeck(cardsDeck);
		}else if (whatDoYouWant=='c'){
		  printCardAtTop(cardsDeck);
		}
		else if (whatDoYouWant=='d'){
		  printTheDeck(cardsDeck);
		}
		else if (whatDoYouWant=='e'){
		  findCardByName(cardsDeck);
		}
		else if (whatDoYouWant=='f'){
		  removeCardFromTheDeck(cardsDeck);
		}
	  whatDoYouWant=whatDoYouWanta();
	}
	system("pause");
	return 0;
}
void printTheDeck(string array1[]){
	for (int i=0;i<counter;i++){
		cout<<array1[i]<<endl;
	  }
}
void printCardAtTop(string array1[]){
  cout<<array1[counter-1]<<endl;
}
void findCardByName(string array1[]){
  string card;
  cout<<"Enter the card that you wanna find in format color-name(lowercase-uppercase)"<<endl;
  cin>>card;
  for(int i=0;i<counter;i++){
	  if(card==array1[i]){
	    cout<<array1[i]<<" is the card that you are looking for and its position in the array is "<<i<<endl;
	  }
  }
}
char whatDoYouWanta(){
	char choice;
	cout<<"Enter \"a\" if you want to shuffle the deck"<<endl;
	cout<<"Enter \"b\" if you want to sort the deck by lexicographical ordinance"<<endl;
	cout<<"Enter \"c\" if you want to print the card at the top of the deck"<<endl;
	cout<<"Enter \"d\" if you want to print the card deck"<<endl;
	cout<<"Enter \"e\" if you want to find card by name and get its position in the deck"<<endl;
	cout<<"Enter \"f\" if you want to remove card from the deck by name"<<endl;
	cout<<"Enter \"x\" to quit"<<endl;
	cin>>choice;
	return choice;

}
void sordTheDeck(string array1[]){
	string swapper;
	int minIndex;
	for (int i=0;i<counter-1;i++){
	  minIndex=i;
	  for (int j=i+1;j<counter;j++){
		  if((array1[j].compare(array1[minIndex]))<0){
		  minIndex=j;
		  }
          if (minIndex!=i){
		    swapper=array1[i];
		    array1[i]=array1[minIndex];
		    array1[minIndex]=swapper;
		  }
	  }
	}
}
void removeCardFromTheDeck(string array1[]){
  string cardName;
  int index;
  cout<<"Enter the name of the card that you want to remove \nfrom the deck in format color-name(lowercase-uppercase)"<<endl;
  cin>>cardName;
  for (int i=0;i<counter;i++){
	  if (array1[i]==cardName){
	    index=i;
		break;
	  }
  }
  for (int i=index;i<counter-1;i++){
    array1[i]=array1[i+1];
  }
  counter--;
 
}
