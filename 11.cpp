#include<iostream>
#include<deque>
using namespace std;
int main()
{
     deque<int> d;
     d.push_back(10);
     d.push_back(20);
     d.push_back(30);
     d.push_back(40);
     d.push_back(50);
     for(int x : d)
          cout<<x<<" ";
     cout<<endl;
     cout<<"first element : "<<d.front();
     cout<<"\nsecond element :"<<d.back();
          cout<<endl;
     return 0;
}
