
#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main()
{
     deque<int> q={2,4,3,6,5,7,8};
     deque<int> q2;
     for(int x : q)
          cout<<x<<" ";
          cout<<endl;
          q2.assign(q.begin(),q.end());
     for(int x : q2)
          cout<<x<<" ";
          cout<<endl;
     return 0;
}


