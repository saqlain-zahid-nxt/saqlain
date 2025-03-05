#include <iostream>
using namespace std;

main(){
    int num;
    int length;
    cout<<"Give the Length: ";
    cin>>length;

    for (int i = 1; i < length+1; i++)
    {
        cout<<endl<<"Table of "<<i<<endl<<endl;

        for (int j = 1; j < length+1; j++)
        {
            cout<<i<<" X "<<j<<" = "<<j*i<<endl;
        }
    }   
}