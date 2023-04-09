
#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main()
{
     deque<int> q={2,4,3,6,5,7,8};
     for(int x : q)
          cout<<x<<" ";
          cout<<"\n maximum element is  :  "<<q.max_size()<<endl;

          cout<<endl;
     return 0;
}

