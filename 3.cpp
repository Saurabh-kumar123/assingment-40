#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main()
{
     deque<int> q={2,4,3,6,5,7,8};
     deque<int>::iterator it=q.begin();
     it++;
     it++;
     it++;
     it++;
     it=q.insert(it,100);
     for(int x : q)
          cout<<x<<" ";
          cout<<"\nreverse"<<endl;
          for(auto x=q.end()-1;x!=q.begin()-1;--x)
               cout<<*x<<" ";
          cout<<endl;
     return 0;
}

