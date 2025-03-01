  /*shows the behavior of access modifiers when they are derived “public”, “private”, and “protected”.

 	                    Public Derivation      	Private Derivation    	Protected Derivation
Private members         Not Inherited            Not Inherited            Not Inherited              
Protected members       Protected                   Private                 Protected                    
Public members          Public	                    Private                 Protected                    
*/

#include<iostream>
using namespace std;

class Base{
    protected:
        int a; 
    private:
        int b;

};

class Derived: protected Base{
   
};

int main(){
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}

