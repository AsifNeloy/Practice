#include <iostream>

using namespace std;



//public static double myMaximum(double [] myArray){}
int main()
{
    double A[10];
    int largest,second;
   cout<<"Enter 10 numbers:  " <<endl;
   for(int i=0; i<10; i++){
          cout<<"A["<<i<<"]:";
    cin>>A[i];
    }



   if(A[0]<A[1]){
      largest = A[1];
      second = A[0];
   }
   else{
      largest = A[0];
      second = A[1];
   }
   for (int i = 2; i<10 ; i ++) {

      if (A[i] > largest) {
         second = largest;
         largest = A[i];
      }

      else if (A[i] > second && A[i] != largest) {
         second = A[i];
      }
   }
   cout<<"Second Largest Element in array is: "<<second;
   return 0;
}

