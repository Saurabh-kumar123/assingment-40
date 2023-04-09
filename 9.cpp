#include<bits/stdc++.h>
using namespace std;
void make_permutation(int n,int k)
{
    deque<int> dq;
    for(int i=1;i<=n;i++)
     dq.push_back(i);
    int front=1;
    vector<int> ar;
    for(int i=1;i<=n;i++)
    {
     if(front==1)
     {
        ar.push_back(dq.front());
        dq.pop_front();
        if(k>1)
            front=0;
        k--;
     }
     else if(front==0)
     {
          ar.push_back(dq.back());
          dq.pop_back();
          if(k>1)
          front=1;
          k--;
     }
   }
   for(int i=0;i<n;i++)
   cout<<ar[i]<<" ";
   cout<<endl;
}
int main()
{
    int n,k;
    cout<<"enter no of permutation & unique diffrence"<<endl;
    cin>>n>>k;
    make_permutation(n,k);
    return 0;
}
