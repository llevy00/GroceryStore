//Lois Levy
#include<iostream>
#include<string>
#include<list>
using namespace std;

int main()
{
  string list[6];
  int numItems = 0;
  char input;
  string item = "";

  do
  {
    cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";
    cout<<"\n(A)dd an item";
    cout<<"\n(Q)uit";
    if(numItems != 0)
    {
        cout<<"\n(D)elete last item";
    }
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
    if(input == 'D' || input == 'd')
    {
        list[numItems-1] = list[5];
    }

  }while(input != 'Q' && input != 'q');

  cout<<"==ITEMS TO BUY==";
  cout<<"\n1 "<<list[0];
  cout<<"\n2 "<<list[1];
  cout<<"\n3 "<<list[2];
  cout<<"\n4 "<<list[3];
  cout<<"\n5 "<<list[4]<<endl;

  return 0;
}
