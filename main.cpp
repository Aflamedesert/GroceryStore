//Author - Michael Crowe
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
do
{
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  if(((char)tolower(input) == 'a') && (numItems < 5)){
          cout << "What would you like to add to your cart? \n";
          cin >> list[numItems];
          cout << "You have " << (5 - (numItems + 1)) << " slots left.\n";
          numItems++;
  }
  else if(numItems > 4){
          cout << "Your list is full, you need a bigger list!\n";
  }
}while((char)tolower(input) != 'q');
cout << "Quiting program!\n";
cout << "Your list includes: \n";
for(int i = 0; i < 5; i++){
cout << (i + 1) << ": " << list[i] << "\n";
}
cout << "Goodbye World!\n";
  return 0;
}
