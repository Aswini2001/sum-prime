#include<iostream>
using namespace std;
int prime(int);
 
int main()
{
	int a,i;
	cout<<"enter a";
	cin>>a;
	for(i=2;i<=a/2;i++)
	
{
	if(prime(i))
{
	if (prime(a-i)){
	
		cout<<a<<"="<<i<<"+"<<a-i<<endl;
}
}
	
} 	
return 0;
}

int prime(int n)
{
  int i;
  int flag=1;
  for (i=2;i<=n/2;i++){
  	if (n%i==0){
  		flag=0;
  		break;
	  }
  }
return flag;
}
 
