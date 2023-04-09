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
     return 0;
}
