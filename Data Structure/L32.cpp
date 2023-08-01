#include<bits/stdc++.h>
using namespace std;


string encode(string text, int s)
{
    //


    for (int i=0;i<text.length();i=i+s)
    {

        /*char x = text.at(i);
        x+2;
        char y = (char)x;
        text.at(i)=x;*/
        if(i==0){continue;}
        text[i]=text[i]+2;
        i++;
    }
    return text;
}


int main()
{
    string text;
    int s=0;
    cout << "Enter a text : ";
    getline(cin,text);
    cout << "Enter shifting value : ";
    cin>>s;
    cout<<encode(text, s);
    return 0;
}
