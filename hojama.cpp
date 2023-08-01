#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000],t[500],u[100][500]={0};
    gets(s);
    gets(t);
    if(strlen(t)==1){
        char c1,c2;
        c1=toupper(t[0]);
        c2=tolower(t[0]);
        int ind=0,m1=0,m2=0,i,wc=0;
        for(i=0;i<strlen(s);i++){
            if(s[i]==c1 || s[i]==c2)
                m1=1;
            if(m1==0 && s[i]==' ')
                ind=i+1;
            if(m1==1 && (s[i]==' ' || s[i]=='.' || s[i]==',')){
                if((m2++)==0) cout<<"Words containning "<<t[0]<<" :\n";
                strncpy(u[wc],&s[ind],i-ind);
                cout<<u[wc++]<<endl;
                m1=0;
                ind=(s[i+1]==' ' ? i+2: i+1);
            }
        }
        if(m1==1){
            if((m2++)==0) cout<<"Words containning "<<t[0]<<" :\n";
            strncpy(u[wc],&s[ind],i-ind);
            cout<<u[wc++];
        }
        if(m2==0)
            cout<<"No words contain "<<t[0]<<"."<<endl;
    }
    return 0;
}
