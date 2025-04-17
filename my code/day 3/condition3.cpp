#include <iostream>
using namespace std ;
    int main(){
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        if (a>b && a>c){
            cout<< "a is greater than all other"<<endl;

        }
        else if(b>a && b>c){
            cout<< "b is greater than all"<<endl;
        
        }
        else{
            cout <<"c is greatest"<<endl;

        }
        return 0;

    }
