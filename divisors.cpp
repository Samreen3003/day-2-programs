#include<iostream>
using namespace std;
void printDivisors(int n)
{
for(int i=1;i<=n;i++)
    if(n%i==0)  
        cout<<" "<<i;
}
int main()
{
int z,n;
cout<<"enter=";
cin>>z;
cout<<"N+";
cin>>n;
cout<<"the divisors are = \n";
printDivisors(z);
return 0;
}
