
#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main()
{
     deque<int> q={2,4,3,6,5,7,8};
     for(int x : q)
          cout<<x<<" ";
          q.pop_front();
           cout<<"\npop font"<<endl;
     for(int x : q)
          cout<<x<<" ";
          cout<<endl;
          cout<<"\npop back"<<endl;
          q.pop_back();
         for(int x : q)
          cout<<x<<" ";
          cout<<endl;

          cout<<endl;
     return 0;
}

