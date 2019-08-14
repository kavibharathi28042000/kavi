#include<iostream>
using namespace std;
int main()
{
int a[3],i,lar;
for(i=0;i<3;i++)
{
 cin>>a[i];
}
lar=a[0];
for(i=1;i<3;i++)
{
if(lar<a[i])
{
 lar=a[i];;
}
}
cout<<lar;
return 0;
}
