#include<bits/stdc++.h>

using namespace std;


int main(){

    int n,anton=0,danik=0;

    cin>>n;

    string s;

    cin>>s;

    for(auto c : s){

        if(c == 'A'){

            anton++;

        }

        else{

            danik++;

        }

    }

    if(anton>danik){
        
        cout<<"Anton"<<endl;

    }

    else if(anton<danik){

        cout<<"Danik"<<endl;

    }
    
    else{

        cout<<"Friendship"<<endl;

    }


    return 0;

}