#include <iostream>
#include <math.h>
using namespace std;
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
	xuatsnt(arr,n);
	return 0;
}
