#include<iostream>
#include<math.h>
using namespace std;


class abc
{    public:
    int x,y;
   
    void   getdis()
    {
        cout<< x+y;

    }



};

class xyz : abc
{   public:
    int z;
    
     void getdis( int k)
    {

        cout << x+y+z +k;

    }

// ok phết

};




int main()
{
   xyz a;
   a.x= 3;
   a.y= 4;
   a.z= 6;
   a.getdis(2);
    
}



