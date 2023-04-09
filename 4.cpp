/*4. Returns a constant iterator pointing to the first element of the container, that is,
the iterator cannot be used to modify, only traverse the deque.*/
#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main()
{
     deque<int> d,d2;
     d.push_back(10);
     d.push_back(20);
     d.push_back(30);
     d.push_back(40);
     d.push_back(50);
     deque<int>::const_iterator it=d.begin();
     for(int x: d)
          cout<<x<<" ";
          cout<<endl;
          d2.assign(d.begin(),d.end());
          d2.swap(d);
          for(int x : d2)
               cout<<x<<" ";
          cout<<endl;
          /*it=d2.begin();     // invalid iterator point because iterator is already const_iterator use before
          for(int i=0;i<d2.size();i++)
               cout<<*it<<" ";*/
          cout<<endl;
          d.assign(3,600);
          for(int x : d)
               cout<<x<<" ";
     return 0;
}
