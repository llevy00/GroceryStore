//Lois Levy
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  string item = "";

  do
  {
    cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";
    cout<<"\n (A)dd an item";
    cout<<"\n (Q)uit";
    cout<<"\nYour choice (A/Q): ";
    cin>>input;

    if(input == 'A' || input == 'a')
    {
         cout<<"What is the item?\n";
         cin>>item;
         list[numItems] = item;
         numItems++;
         
        if(numItems > 5)
        {   
            cout<<"You'll need a bigger list!\n";
            numItems++;
        }
    }

  }while(input != 'Q' && input != 'q');

  cout<<"1 "<<list[0]<<endl;
  cout<<"2 "<<list[1]<<endl;
  cout<<"3 "<<list[2]<<endl;
  cout<<"4 "<<list[3]<<endl;
  cout<<"5 "<<list[4]<<endl;

  return 0;
}
