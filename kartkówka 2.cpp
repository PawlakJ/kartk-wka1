#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

int main()
{
int x,y,i;
cout<<"Podaj warto�� pocz�tkowa"<<endl;
cin>>x;
cout<<"Podaj warto�� ko�cow�"<<endl;
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
