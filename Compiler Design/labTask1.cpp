#include<bits/stdc++.h>
using namespace std;

int main()
{
          ofstream Write("Students Information.txt");

          int no, p;
          string name, marks;

          cout<<"How many students information you want to store?"<<endl;

          cin>>no;

          while(no!=0)
          {
                    no--;
                    cout<<"Write the name of the student : ";
                    cin>>name;
                    cout<<endl<<"Write marks : ";
                    cin>>marks;
                    Write << " Student name : "<<name<<endl<<" Marks : "<<marks<<". "<<endl<<endl;

          }
          Write.close();

          cout<<"Do you want to read from the file? \nIf yes then press 1 or 0 for no."<<endl;
          cin>>p;
          if(p==1)
          {
                    string text;

          ifstream Read("Students Information.txt");

          while( getline(Read, text))
                    {
                              cout<<text;
                    }

          Read.close();
          }
          else{cout<<"Program ends here"<<endl;}

          return 0;

}
