//Author - Michael Crowe
#include<iostream>
#include<string>
#include<cctype>
#include<vector>

using namespace std;

int main()
{
  vector<string> list;//array of 5 strings
  char input;
do
{
  bool undefined = true;
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  if(list.size() > 0){
          cout<<"\n (D)elete last item";
  }
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  input = ' ';
  cin>>input;
  if((char)tolower(input) == 'a'){
         string response;
         cout << "What would you like to add to the cart?";
         cin >> response;
         list.push_back(response);
         undefined = false;
    }
  else if(((char)tolower(input) == 'd') && (list.size() > 0)){
        cout<< list[list.size() - 1] << " was deleted from the list\n";
        list.pop_back();
        undefined = false;
  }
  else if((undefined) && (!(char)tolower(input) == 'q')){
          cout << "you entered an invalid command";
          break;
  }
}while((char)tolower(input) != 'q');
cout << "Quiting program!\n";
cout << "Your list includes: \n";
for(int i = 0; i < list.size(); i++){
cout << (i + 1) << ": " << list[i] << "\n";
}
cout << "Goodbye World!\n";
  return 0;
}
