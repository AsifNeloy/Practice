#include<bits/stdc++.h>
using namespace std;

calculate(){
          int student_id[10],completed_credit[10],i;
          float cgpa[10];
          for(i=0;i<10;i++){
                    cout<<"Enter student["<<i+1<<"] id : ";
                    cin>>student_id[i];
                    for(int j=i-1;j>=0;j--){
                              if(student_id[j]==student_id[i]){
                                        cout<<"Same id is not acceptable"<<endl;
                                        cout<<"Enter student["<<i+1<<"] id : ";
                                        cin>>student_id[i];
                              }
                    }
                    cout<<"Enter student["<<i+1<<"] complete credits : ";
                    cin>>completed_credit[i];
                    cout<<"Enter student["<<i+1<<"] cgpa : ";
                    cin>>cgpa[i];
          }
          cout<<endl<<"All student id above cgpa 3.75 :"<<endl;
          for(i=0;i<10;i++){
                    if(cgpa[i]>3.75){
                              cout<<student_id[i]<<endl;
                    }
          }
          cout<<endl<<"All student id above 50 completed credits :"<<endl;
          for(i=0;i<10;i++){
                    if(completed_credit[i]>50){
                              cout<<student_id[i]<<endl;
                    }
          }
}

int main(){
          calculate();
          return 0;}
