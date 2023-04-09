#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main()
{
     deque<int> q={2,4,3,6,5,7,8};
     for(int x : q)
          cout<<x<<" ";
     deque<int>::iterator it=q.begin();
     it++;
     it++;
     it++;
     cout<<endl;
     q.erase(it);
     cout<<"value is erase"<<endl;
     for(int x : q)
          cout<<x<<" ";

          cout<<endl;
     return 0;
}

