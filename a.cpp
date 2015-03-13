#include<iostream>
using namespace std;

int main()
{
  int n;
   
   cout<<"please input n\n";
   cin>>n;

   cout<<n<<" ";

   while(n!=1)
  {

     if(n%2!=0)
    {
      n=3*n+1;
      cout<<n<<" ";
     }  
 
     else if(n%2==0)
    {
       n=n/2;
       cout<<n<<" ";
     }
       
   } 
  cout<<endl;
   return 0;
 }  
