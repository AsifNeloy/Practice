#include <iostream>



using namespace std;



int main() {
float A[5]={94,87,82,85,90};
float c=3, a=0,b=0,r=0,d=0,e=0,f=0,k=0;

for (int i=0; i<5; i++){
    if(A[i]>=90){
         k=c*4.0;cout<<"Hola1"<<endl;
    }
    if(A[i]>=85 && A[i]<90){
        a=c*3.75;cout<<"Hola2"<<endl;

    }
    if(A[i]>=80 && A[i]<85){
         b=c*3.5;cout<<"Hola3"<<endl;
    }
    if(A[i]>=75 && A[i]<80){
         r=c*3.25;
    }
    if(A[i]>=70 && A[i]<75){
         d=c*3.0;
    }
    if(A[i]>=50 && A[i]<70){
         e=c*2.75;
    }
    if(A[i]<50){
         f=c*2.5;
    }}
    float totalgradepoints= a+b+r+d+e+f+k;
    float totalcredit= c*5;
    float  cgpa= totalgradepoints / totalcredit;
    cout<<"Cgpa is :"<< cgpa<<endl;
return 0;}
