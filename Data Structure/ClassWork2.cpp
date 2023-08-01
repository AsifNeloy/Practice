#include <iostream>
using namespace std;
int main()
{         int x, fact=1;

          cout<<" Type a number : ";
          cin>> x;

          for(int i=2;i<=x;i++)
          {

          fact *= i;

          }
          cout<< "result :  " << fact<<endl;








    return 0;
}

