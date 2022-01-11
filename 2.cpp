#include<iostream>
using namespace std;
int max(int b[],int s)
{ 
  int l=b[0];
  for(int j=1;j<s;j++)
  {
	  if(b[j]>l)
	  {
		  l=b[j];
	  }
  }
  return l;
}
int main()
{
  int a[10];
  cout<<"enter the values in array"<<endl;
  for(int i=0;i<10;i++)
  {
	  cin>>a[i];
  }
  int m=max(a,10);
  cout<<"the maximum value of array is "<<m;
  return 0;
}
