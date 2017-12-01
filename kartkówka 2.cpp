#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

int main()
{
int x,y,i;
cout<<"Podaj wartoœæ pocz¹tkowa"<<endl;
cin>>x;
cout<<"Podaj wartoœæ koñcow¹"<<endl;
cin>>y;
if(y%2==0){
    y--;
}

for(i=x;i<=y;i++){
    if(i%2!=0){

            if(i!=y)

         cout<<i<<",";
         else


        cout<<i<<".";



    }

}

return 0;
}
