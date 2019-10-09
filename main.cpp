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
         if(numItems<5)
         {
            list[numItems]=item;
         }
         numItems++;

        if(numItems > 5)
        {   
            cout<<"You'll need a bigger list!\n";
            numItems++;
        }
    }

  }while(input != 'Q' && input != 'q');

  cout<<"==ITEMS TO BUY==\n";
  cout<<"\n1 "<<list[0];
  cout<<"\n2 "<<list[1];
  cout<<"\n3 "<<list[2];
  cout<<"\n4 "<<list[3];
  cout<<"\n5 "<<list[4]<<endl;

  return 0;
}
