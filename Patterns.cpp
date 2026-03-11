#include<bits/stdc++.h>
using namespace std;


int pattern7(int n){
    for(int i=1; i<=n; i++){
        for(int j=1;j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

int pattern8(int n){
    for(int i=0; i<n; i++){
        for(int j=0;j<i; j++){
            cout<<" ";
        }
        for(int k=1; k<=n-i; k++){
            cout<<"* ";
        }
       
       
        cout<<endl;
    }
    return 0;
}

int pattern9(int n){
    pattern7(n);
    pattern8(n);


    return 0;
}

int pattern12(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<< j;
        }
        for(int k=1; k<=(2*n-1)-(2*i); k++) cout<<" ";
        for(int j=i; j>=1; j--){
            if(j==n){ continue;}
            cout<< j;
        }
        cout<<endl;
    }


    return 0;
}

int pattern22(int n){
    for(int i=n; i>0; i--){
        int count=n;
        int countr=i;
        for(int j=n; j>0; j--){
            cout<<count;
            if(count>i)count--;
        }
        for(int j=1; j<n; j++){
            if(countr==j)countr++;
            cout<<countr;
           
        }
        cout<<endl;
    }
    for(int i=2; i<=n; i++){
        int count=n;
        int countr=i;
        for(int j=n; j>0; j--){
            cout<<count;
            if(count>i)count--;
        }
        for(int j=1; j<n; j++){
            if(countr==j)countr++;
            cout<<countr;
           
        }
        cout<<endl;
    }
}

int main(){
    pattern22(5);
    return 0;
}



