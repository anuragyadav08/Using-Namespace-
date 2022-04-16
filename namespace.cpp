
#include <iostream>

using namespace std;

namespace Anu{
    int x=8;
}
int x=12;
int main()
{
   int x=18;
   cout<<"Namespace Value : "<<Anu::x<<endl;
   cout<<"Global Value : "<<::x<<endl;
   cout<<"Local Value : "<<x;

    return 0;
}
