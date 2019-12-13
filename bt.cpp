#include <iostream>
#include <math.h>
using namespace std;
bool ktshh(int n)
{
	int sum = 0;
	for(int i = 1 ;i <= n/2 ;i++)
	{
		if(n%i == 0) sum+=i;
	}
	if(sum == n) return true;
	return false;
}
void xuatshh(int arr[],int n)
{
	for(int i = 0 ; i < n; i++)
	{
		if(ktshh(arr[i])) cout<<arr[i]<<" ";
	}
}
bool ktscp(int n)
{
	int result = sqrt(n);
	return (result*result == n);
}
void xuatscp(int arr[],int n)
{
	for(int i = 0 ; i < n; i++)
	{
		if(ktscp(arr[i])) cout<<arr[i]<<" ";
	}
}
bool ktsnt(int n)
{
	if(n < 2) return false;
	for(int i = 2 ; i <= sqrt(n); i++)
	{
		if(n%i == 0) return false;
	}
	return true;
}
void xuatsnt(int arr[],int n)
{
	for(int i = 0 ; i < n; i++)
	{
		if(ktsnt(arr[i])) cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"Nhap so luong pt: "; cin>>n;
	int arr[n];
	for(int i = 0 ; i < n; i++)
	{
		cout<<"Pt["<<i<<"]="; cin>>arr[i];
	}	
	xuatshh(arr,n);
	return 0;
}
